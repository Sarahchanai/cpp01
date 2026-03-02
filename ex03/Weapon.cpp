/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarah <sarah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 22:04:41 by sarah             #+#    #+#             */
/*   Updated: 2026/03/02 01:40:24 by sarah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) //constructeur
{
}

Weapon::~Weapon () //destructeur
{
}



const std::string&	Weapon::getType(void) const //retourne une reference constante sur le type d'arme
{
    return (this->_type);
}


void	Weapon::setType(std::string type) //setter pour le type d'arme
{
    this->_type = type;
}


