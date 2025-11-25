/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarah <sarah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 19:24:03 by sarah             #+#    #+#             */
/*   Updated: 2025/11/25 21:00:07 by sarah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)

//allouer N zombies sur la heap d'1 coup
//initualiser chaque zombie avec le nom passe en para
//retourner un pointeur sur le 1er zombie

{
	if (N <= 0)
	{
		std::cout << "Error: N must be positive" << std::endl;
		return (NULL);
	}
	
	Zombie	*horde = new Zombie[N];
	
	for (int i = 0; i < N; i++)
	{
		horde[i].setName(name);
	}
	
	return horde;
	
}