/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sachanai <sachanai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:58:48 by sachanai          #+#    #+#             */
/*   Updated: 2025/12/13 15:15:07 by sachanai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
    std::cout << "Custumer Harl created" << std::endl;
}
Harl::~Harl(void)
{
    std::cout << "Custumer Harl destructed" << std::endl;
}

// A NE PS FAIRE CONTREXEMPLE
// void	Harl::complain(std::string level)
// {
// if (level == "DEBUG")
//     this->debug();
// else if (level == "INFO")
//     this->info();
// else if (level == "WARNING")
//     this->warning();
// else if (level == "ERROR")
//     this->error();
// else
// {
//     std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
// }
// }

void	Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for"
    <<"years, whereas you started working here just last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}


void Harl::complain(std::string level)
{
    void (Harl::*fonctions[4])(void) = 
    { //propre au c++ -> pour initialiser
        &Harl::debug,    // ← 0
        &Harl::info,     // ← 1
        &Harl::warning,  // ← 2
        &Harl::error     // ← 3
    };
    
    std::string niveaux[4] = 
    {
        "DEBUG",    // ← 0 : MÊME INDICE que debug
        "INFO",     // ← 1 : MÊME INDICE que info
        "WARNING",  // ← 2 : MÊME INDICE que warning
        "ERROR"     // ← 3 : MÊME INDICE que error
    };
    
    // Boucle pour trouver l'indice correspondant
    for (int i = 0; i < 4; i++) 
    {
        if (level == niveaux[i]) {
            (this->*fonctions[i])();  // Appelle la fonction au MÊME indice
            return;
        }
    }
}