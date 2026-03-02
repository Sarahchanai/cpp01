/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarah <sarah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 21:37:29 by sarah             #+#    #+#             */
/*   Updated: 2026/03/02 01:09:45 by sarah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN"; //comme d'hab


	
	
	std::string	*stringPTR = &str;

	std::string	&stringREF = str;



	

	std::cout << "Memory Address of str: " << &str << std::endl;
	std::cout << "Memory Address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory Address held by stringREF: " << &stringREF << std::endl;
	
	std::cout << std::endl;
	
	std::cout << "Value of str: " << str << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
	
	return (0);
}