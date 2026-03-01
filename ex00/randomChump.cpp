/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarah <sarah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 18:38:19 by sarah             #+#    #+#             */
/*   Updated: 2026/03/01 22:48:35 by sarah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//temporaire objet crée ds la fonc° donc se détruit auto qd la fonc° se termine


//creer un zombie sur la stack -> variable locale
//donner un nom a ce zombie
//faire appeler la fonction announce de ce zombie
//autodestruction a la fin de la fonction

void	randomChump(std::string name)
{
    Zombie zombie(name);
	zombie.announce();
}

