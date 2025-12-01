/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sachanai <sachanai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:14:17 by sachanai          #+#    #+#             */
/*   Updated: 2025/12/01 11:55:30 by sachanai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream> //

std::string remplacer_mot(std::string contenu, std::string motachercher, std::string remplacant)
{
	std::string result;
	size_t pos = 0;
	size_t posdumotachercher;

	while ((posdumotachercher = contenu.find(motachercher, pos)) !=  std::string::npos)
	{
		result.append(contenu.substr(pos, posdumotachercher - pos));
		result += remplacant;
		pos = posdumotachercher + motachercher.length();
		
	}
	result += contenu.substr(pos);
	return (result);
}


int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage: <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	    std::string fichier = av[1];
    std::string motachercher = av[2];
    std::string remplacant = av[3];
    
    if (motachercher.empty())
    {
        std::cerr << "Erreur: le mot à chercher est vide" << std::endl;
        return (1);
    }
    
    std::ifstream entree(fichier.c_str());
    if (!entree)
    {
        std::cerr << "Erreur: impossible d'ouvrir le fichier" << std::endl;
        return (1);
    }
    
    std::stringstream tampon;
    tampon << entree.rdbuf();
    std::string contenu = tampon.str();
    entree.close();
    
    std::string result = remplacer_mot(contenu, motachercher, remplacant);
    
    std::ofstream sortie((fichier + ".replace").c_str());
    if (!sortie)
    {
        std::cerr << "Erreur: impossible de créer le fichier" << std::endl;
        return (1);
    }
    
    sortie << result;
    sortie.close();
    
    return (0);
}
	
}