/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 18:37:31 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/21 16:08:20 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.h"

DiamondTrap::DiamondTrap() : ClapTrap () , ScavTrap() , FragTrap()
{
    std::cout << "DiamoundTrap default constructor called." << std::endl;    
}

DiamondTrap::DiamondTrap(std::string _name) : ClapTrap () , ScavTrap() , FragTrap() 
{
    std::cout << "DiamoundTrap constructor called." << std::endl;
    this->name = _name;

    ClapTrap::name = _name + "_clap_name";
    hitPoint = 100;
    energy = 50;
    attDamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondtrap) : ClapTrap () , ScavTrap() , FragTrap()
{
    *this = diamondtrap;
    std::cout << "DiamondTrap copy constructor called." << std::endl;
}

DiamondTrap &DiamondTrap::operator = (const DiamondTrap &diamondtrap)
{
    if (this == &diamondtrap)
        return (*this);
    ClapTrap::name = diamondtrap.ClapTrap::name;
    name = diamondtrap.name;
    hitPoint = diamondtrap.hitPoint;
    energy = diamondtrap.energy;
    attDamage = diamondtrap.attDamage;
    return (*this);
}

void DiamondTrap::setName(std::string _name)
{
    this->name = _name;
}

std::string DiamondTrap::getName(void) const
{
    return (name);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap: my name is: " << name << " and my ClapTrap name is: " << ClapTrap::name <<std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamoundTrap default destructor called for: " << name << std::endl;    
}