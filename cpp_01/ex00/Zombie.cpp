/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 09:55:22 by eabdelha          #+#    #+#             */
/*   Updated: 2022/07/24 10:53:13 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"


Zombie::Zombie() : name("Boogeyman") {}


Zombie::Zombie(std::string name) : name(name) {}

void    Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string name)
{
    this->name = name;
}

std::string    Zombie::getName() const
{
    return (name);
}

Zombie::~Zombie()
{
    std::cout << name << ": get killed!" << std::endl;
}