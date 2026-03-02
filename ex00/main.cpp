/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarah <sarah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 18:49:10 by sarah             #+#    #+#             */
/*   Updated: 2026/03/02 00:18:44 by sarah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::cout << "Creating a zombie on the heap : " << std::endl;
	Zombie	*heap_zombie = newZombie("Chanai");
	heap_zombie->announce();

	
	std::cout << "Creating a zombie on the stack : " << std::endl;
	randomChump("Sarah");

	heap_zombie->announce();

	
	delete heap_zombie;


	return (0); 
} 

