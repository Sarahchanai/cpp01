/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarah <sarah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 22:04:23 by sarah             #+#    #+#             */
/*   Updated: 2025/11/26 11:09:03 by sarah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

//but du projet : me faire comprendre qd utiliser une reference & VS un pointeur *

class Weapon
{
	public:

		Weapon(std::string type); //constructeur
		~Weapon();

		const std::string&	getType(void) const; //retourne une reference constante sur le type d'arme
		void	setType(std::string type); //setter pour le type d'arme


	private:
		std::string _type; //cf sujet -> type d'arme

};



#endif