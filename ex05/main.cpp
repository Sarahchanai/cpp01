/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarah <sarah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:58:29 by sachanai          #+#    #+#             */
/*   Updated: 2026/03/04 13:26:19 by sarah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// int	main(void)
// {
//    Harl	lewis;
   
//    lewis.complain("DEBUG");
//    std::cout << std::endl;
//    lewis.complain("INFO");
//    std::cout << std::endl;
//    lewis.complain("WARNING");
//    std::cout << std::endl;
//    lewis.complain("ERROR");
//    std::cout << std::endl;

//    return (0);

// }


int	main(int ac, char **av)
{
	Harl	lewis;

	if (ac != 2)
	{
		std::cerr << "Usage: ./harl <level>" << std::endl;
		return (1);
    }
	lewis.complain(av[1]);
    return (0);
}