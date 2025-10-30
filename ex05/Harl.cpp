/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hparveen <hparveen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 11:08:17 by hparveen          #+#    #+#             */
/*   Updated: 2025/10/30 11:56:19 by hparveen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    _funcsPtr[0] = &Harl::debug;
    _funcsPtr[1] = &Harl::info;
    _funcsPtr[2] = &Harl::warning;
    _funcsPtr[3] = &Harl::error;

    _level[0] = "DEBUG";
    _level[1] = "INFO";
    _level[2] = "WARNING";
    _level[3] = "ERROR";
}

Harl::~Harl() {}

void Harl::debug(void)
{
    std::cout << GREEN << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << RESET << std::endl;
}

void Harl::info(void)
{
    std::cout << BLUE << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money.";
    std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << RESET << std::endl;
}

void Harl::warning(void)
{
    std::cout << YELLOW << "[ WARNING ]"  << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. ";
    std::cout << "I’ve been coming for years whereas you started working here since last month." << RESET<< std::endl;
}

void Harl::error(void)
{
    std::cout << RED << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << RESET << std::endl;
}

void Harl::complain(std::string level)
{
    for (int i = 0; i < 4; i++)
    {
        if (level == _level[i])
        {
            (this->*_funcsPtr[i])();
            return;
        }
    }
    std::cout << MAGENTA << "[ UNKNOWN LEVEL ]" << RESET<< std::endl;
}
