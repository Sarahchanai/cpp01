/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarah <sarah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 22:08:58 by sarah             #+#    #+#             */
/*   Updated: 2025/11/26 11:24:31 by sarah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) //constructeur sans arme
{
}

/* HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weapon = NULL;
} */

HumanB::~HumanB() //destructeur
{
}


void	HumanB::setWeapon(Weapon& weapon) //setter pour l'arme
{
	this->_weapon = &weapon;
}


void	HumanB::attack(void) //fonction d'attaque
{
	if (this->_weapon != NULL)
	{
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	}
	else
	{
		std::cout << this->_name << " has no weapon to attack with!" << std::endl;
	}
}



