/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarah <sarah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 18:49:10 by sarah             #+#    #+#             */
/*   Updated: 2025/11/25 19:21:06 by sarah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* int	main(void)
{
	std::cout << "Creating a zombie on the stack :" << "\n" << std::endl;
	randomChump("Sarah");

	std::cout << "\nCreating a zombie on the heap :" << "\n" << std::endl;
	Zombie	*heap_zombie = newZombie("Chanai");
	heap_zombie->announce();
	delete heap_zombie;

	
	return (0); 
} */

	
int main(void)
{
	std::cout << "\n--- TEST STACK (dies immediately) ---" << std::endl;
	randomChump("StackZombie_DiesNow");
	std::cout << "StackZombie_DiesNow is already destroyed\n" << std::endl;
	
	std::cout << "--- TEST HEAP (survives until delete) ---" << std::endl;
	Zombie *heapZombie = newZombie("HeapZombie_SurvivesLonger");
	heapZombie->announce();  // ← On annonce manuellement
	std::cout << "HeapZombie_SurvivesLonger is still alive" << std::endl;
	delete heapZombie;
	std::cout << "HeapZombie_SurvivesLonger is now destroyed\n" << std::endl;
	
	std::cout << "--- COMPARISON (mixed) ---" << std::endl;
	Zombie *persistent1 = newZombie("Heap_Persistent_1");
	persistent1->announce();  // ← On annonce manuellement
	Zombie *persistent2 = newZombie("Heap_Persistent_2");
	persistent2->announce();  // ← On annonce manuellement
	randomChump("Stack_Dies_Instantly");
	std::cout << "Stack_Dies_Instantly is dead, but Heap zombies are alive:" << std::endl;
	persistent1->announce();
	persistent2->announce();
	delete persistent1;
	delete persistent2;
	
	return (0);
}