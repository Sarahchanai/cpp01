/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarah <sarah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 22:13:49 by sarah             #+#    #+#             */
/*   Updated: 2025/11/26 11:29:53 by sarah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

//seule facon par la liste d'initialisation
HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon) //constructeur avec reference a une arme
{
}

HumanA::~HumanA() //destructeur
{
}

void	HumanA::attack(void) //fonction d'attaque
{
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}



