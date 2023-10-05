/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 10:12:12 by eabdelha          #+#    #+#             */
/*   Updated: 2022/07/25 10:41:52 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

HumanB::HumanB(std::string name) : name(name), weapon(NULL){};

HumanB::~HumanB(){};

const std::string &HumanB::getName() const
{
    return (name);
}

void HumanB::setName(std::string name)
{
    this->name = name;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void    HumanB::attack()
{
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
