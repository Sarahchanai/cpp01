/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarah <sarah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 22:08:49 by sarah             #+#    #+#             */
/*   Updated: 2026/03/02 01:29:07 by sarah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class	HumanB
{
	public:
	
			HumanB(std::string name); //constructeur sans arme
			~HumanB(); //destructeur
			
			void	setWeapon(Weapon& weapon); //setter pour l'arme
			void	attack(void); //fonction d'attaque
			
	private:
	
			std::string	_name; //nom de l'humain
			Weapon	*_weapon; //pointeur sur une arme

};




#endif