/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarah <sarah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 11:53:53 by sarah             #+#    #+#             */
/*   Updated: 2025/11/26 23:41:47 by sarah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int replace(char **argv, const std::string& content)
{
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    
    if (s1.empty())
    {
        std::cerr << "Error: s1 cannot be empty" << std::endl;
        return 1;
    }
    
    std::string outFilename = std::string(argv[1]) + ".replace";
    std::ofstream outfile(outFilename.c_str());
    
    if (!outfile)
    {
        std::cerr << "Error: cannot create output file" << std::endl;
        return 1;
    }
    
    std::string result;
    size_t pos = 0;
    size_t lastPos = 0;
    
    // Construction progressive sans modifier la string originale
    while ((pos = content.find(s1, lastPos)) != std::string::npos)
    {
        result.append(content, lastPos, pos - lastPos); // Copie jusqu'à s1
        result.append(s2);                               // Ajoute s2
        lastPos = pos + s1.length();                     // Avance après s1
    }
    result.append(content, lastPos, std::string::npos);  // Copie le reste
    
    outfile << result;
    
    if (outfile.fail())
    {
        std::cerr << "Error: failed to write to output file" << std::endl;
        return 1;
    }
    
    return 0;
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    
    std::ifstream infile(argv[1]);
    if (!infile)
    {
        std::cerr << "Error: cannot open file " << argv[1] << std::endl;
        return 1;
    }
    
    std::string content;
    std::string line;
    
    while (std::getline(infile, line))
    {
        content += line;
        if (!infile.eof())
            content += '\n';
    }
    
    return replace(argv, content);
}