/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarah <sarah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 22:05:13 by sarah             #+#    #+#             */
/*   Updated: 2026/03/02 01:28:38 by sarah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class	HumanA
{
	public:

			HumanA(std::string name, Weapon& weapon); //constructeur avec reference a une arme
			~HumanA(); //destructeur

			void	attack(void); //fonction d'attaque



	private:
	
			std::string	_name; //nom du humain
			Weapon	&_weapon; //reference a une arme
	
};




#endif