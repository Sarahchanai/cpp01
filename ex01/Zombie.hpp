/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarah <sarah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 19:23:36 by sarah             #+#    #+#             */
/*   Updated: 2026/03/02 00:25:48 by sarah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

// but de l'exo declarer et initialiser pleins de zombies d'un coup sur la heap
// pas d'alloc separee pour chaque zombie
// la fonction zombieHorde prend en para le nb de zombie et leur nom 


class   Zombie
{
    public :

        Zombie(void); //constructeur par defaut
        ~Zombie(void); //destructeur
		
        void	announce(void); //fonction d'annonce
		
		void	setName(std::string name); //setter pour le nom du zombie
        
    private :

		std::string _name; //nom du zombie
};

Zombie	*zombieHorde(int N, std::string name); //cf sujet


#endif