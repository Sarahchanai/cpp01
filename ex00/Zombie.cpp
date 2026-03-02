/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarah <sarah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:49:07 by sarah             #+#    #+#             */
/*   Updated: 2026/03/01 23:50:42 by sarah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << _name << " has been created" << std::endl;
} */

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << this->_name << " has been created" << std::endl;
	//
}

Zombie::~Zombie(void)
{
	std::cout << _name << " has been destructed" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

/* void  Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
} */

