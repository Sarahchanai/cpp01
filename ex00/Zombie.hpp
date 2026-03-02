/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarah <sarah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 11:23:04 by sachanai          #+#    #+#             */
/*   Updated: 2026/03/01 23:00:09 by sarah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
 
#include <string>
#include <iostream>




class Zombie
{
    public :

		Zombie(std::string _name); //constructeur != de "Zombie()" -> name direct a la creation
		~Zombie(); //destructeur

		
		void announce(void); //fon° demandee ds le sujet -> affiche le nom du zombie
    
    private :
	
		std::string _name; // _name ds pv -> encapsulation -> je v le nommer à sa création et après ne plus y toucher
};




										//FONCTIONS HORS CLASSE

Zombie	*newZombie(std::string name); //cf sujet
void	randomChump(std::string name); //cf sujet




#endif