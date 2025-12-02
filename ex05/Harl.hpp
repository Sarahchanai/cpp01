/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sachanai <sachanai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:59:04 by sachanai          #+#    #+#             */
/*   Updated: 2025/12/02 17:18:11 by sachanai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>
#include <iomanip>

//but : comprendre pointeurs sur fonctions

class	Harl
{
	public :
		Harl(void);
		~Harl(void);
		
		void	complain(std::string level);

	private :
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};



//#pragma once
#endif