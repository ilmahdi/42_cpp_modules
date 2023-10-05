/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 20:23:04 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/18 17:06:21 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

Harl::Harl()
{
    levels[0].strLevel = "DEBUG";
    levels[0].funLevel = &Harl::debug;
    levels[1].strLevel = "INFO";
    levels[1].funLevel = &Harl::info;
    levels[2].strLevel = "WARNING";
    levels[2].funLevel = &Harl::warning;
    levels[3].strLevel = "ERROR";
    levels[3].funLevel = &Harl::error;
}

Harl::~Harl(){}

void    Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger.\n" 
    << "I really do!" << std::endl  << std::endl;;
}

void    Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money.\n" 
    << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"
    << std::endl  << std::endl;;
}

void    Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free.\n" 
    << "I've been coming for years whereas you started working here since last month."
    << std::endl  << std::endl;;
}

void    Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now."
    << std::endl  << std::endl;
}

void    Harl::complain(std::string level)
{
    for(int i = 0; i < 4; i++)
        if (level == levels[i].strLevel)
            (this->*(levels[i].funLevel))();
}
