/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarah <sarah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 18:34:00 by sarah             #+#    #+#             */
/*   Updated: 2025/11/25 19:10:15 by sarah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//creer un zombie avec new = malloc donc -> heap
//donner un nom a ce zombie
//retourner un pointeur sur ce zombie
//le zombie survit apres l'appel de la fonction


Zombie	*newZombie(std::string name)
// Zombie * -> retourne un pointeur sur un zombie
// newZombie -> nom de la fonction
// (std::string name( -> parametre de la fonction -> nom du zombie a creer
// je decide quand il s'annonce et quand il se detruit


{
	Zombie	*new_zombie = new Zombie(name); 
	//new_zombie -> pointeur sur un zombie
	//new Zombie(name) -> cree un nouveau zombie avec le nom name sur la heap

	return (new_zombie);
	//retourne le pointeur sur le nouveau zombie
    
}