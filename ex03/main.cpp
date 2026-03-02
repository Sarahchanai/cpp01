/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarah <sarah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 22:01:52 by sarah             #+#    #+#             */
/*   Updated: 2026/03/02 01:59:50 by sarah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{

	//ref
	Weapon ferrari = Weapon ("ferrari");
	HumanA Lewis("Lewis", ferrari); // tjrs armé -> référence

	Lewis.attack();

	ferrari.setType("red");

	Lewis.attack();

	

	
	// pointeur
	HumanB Piastri ("mclaren");
	Piastri.attack();
	Piastri.setWeapon(ferrari);
	Piastri.attack();

	
	
	
	
	return (0);
}