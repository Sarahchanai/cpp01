/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarah <sarah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 19:23:22 by sarah             #+#    #+#             */
/*   Updated: 2025/11/25 21:32:06 by sarah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde = zombieHorde(5, "lewis");
	
	if (horde == NULL)
	{
		std::cout << "Failed to create zombie horde." << std::endl;
		return (1);
	}

	for (int i = 0; i < 5; i++)
	{
		horde[i].announce();
	}

	delete[] horde;


	return (0);
}