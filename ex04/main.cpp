/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarah <sarah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:14:17 by sachanai          #+#    #+#             */
/*   Updated: 2026/03/04 12:58:45 by sarah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream> //

std::string	replace(std::string	fileText, const std::string	&wordToFind, const std::string	&wordToReplaceBy)
{
	size_t	pos = 0;
	while ( (pos = fileText.find (wordToFind, pos)) != std::string:: npos)
	{
		fileText.erase (pos, wordToFind.size());
		fileText.insert(pos, wordToReplaceBy);
		pos += wordToReplaceBy.size();
	}
	return fileText;
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage: <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	
	std::string filename = av[1];
    std::string wordToFind = av[2];
    std::string wordToReplaceby = av[3];
    
    if ( wordToFind.empty() )
    {
        std::cerr << "Error: word to find an not be empty, define it" << std::endl;
        return (1);
    }
    
	std::ifstream inFile(filename); //ouverture fichier de base

	if (!inFile.is_open()) //Vérif
    {
		std::cerr << "Error: cannot open file '" << filename << "'." << std::endl;
		return 1;
	}

	std::string content( (std::istreambuf_iterator<char>(inFile)) ,std::istreambuf_iterator<char>() ); //recopie par la lecture ifstream du premier char à plus rien 
	
	inFile.close(); //fermeture du fichier de base 

	std::ofstream outFile(filename + ".replace"); // cré° new file pr écrire le résult -> ofstream
	
	if (!outFile.is_open())
    {
		std::cerr << "Error: cannot create output file." << std::endl;
		return 1;
    }

	outFile << replace(content, wordToFind, wordToReplaceby); // On écrit le contenu modifié sur le new fichier

	outFile.close(); //je ferme le new fichier

	return (0);
	
}
