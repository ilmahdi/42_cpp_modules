/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 09:49:49 by eabdelha          #+#    #+#             */
/*   Updated: 2022/07/25 10:43:04 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon){};

HumanA::~HumanA(){};

const std::string &HumanA::getName() const
{
    return (name);
}

void HumanA::setName(std::string name)
{
    this->name = name;
}

void    HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}