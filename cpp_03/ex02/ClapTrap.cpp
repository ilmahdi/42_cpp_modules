/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 16:43:40 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/21 15:43:32 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap(void)
{
    std::cout << "ClapTrap default constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name) , hitPoint(10), energy(10), attDamage(0)
{
    std::cout << "ClapTrap constructor called for: " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
    *this = claptrap;
    std::cout << "ClapTrap copy constructor called." << std::endl;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &claptrap)
{
    if (this == &claptrap)
        return (*this);
    name = claptrap.name;
    hitPoint = claptrap.hitPoint;
    energy = claptrap.energy;
    attDamage = claptrap.attDamage;
    return (*this);
}

void ClapTrap::attack(const std::string &target)
{
    std::cout << "ClapTrap " << name;
    if (!energy)
        std::cout << " is out of energy!." << std::endl;
    else if (!hitPoint)
        std::cout << " is already dead!." << std::endl;
    else
    {
        std::cout << " attacks " << target <<  ", causing " << attDamage << " points of damage!" << std::endl;
        energy--;
    }
}

void ClapTrap::takeDamage(unsigned int amount) 
{
    std::cout << "ClapTrap " << name;
    if (!hitPoint)
        std::cout << " is already dead!." << std::endl;
    else
    { 
        if (amount > hitPoint)
            amount = hitPoint;
        hitPoint -= amount;
        std::cout << " took " << amount << " points of damage!" <<std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) 
{
    std::cout << "ClapTrap " << name;
    if (!energy)
        std::cout << " is out of energy!." << std::endl;
    else if (!hitPoint)
        std::cout << " is already dead!." << std::endl;
    else
    {
	    std::cout << " repaired by " << amount << " hit points!" << std::endl;
        hitPoint += amount;
        energy--;
    }
}

std::string ClapTrap::getName(void) const
{
    return (name);
}

size_t ClapTrap::getHitPoint(void) const
{
    return (hitPoint);
}
size_t ClapTrap::getEnergy(void) const
{
    return (energy);
}
size_t ClapTrap::getAttDamage(void) const
{
    return (attDamage);
}

void ClapTrap::setName(std::string _name)
{
    this->name = _name;
}

void ClapTrap::setHitPoint(size_t amount)
{
    hitPoint = amount;
}

void ClapTrap::setEnergy(size_t amount)
{
    energy = amount;
}

void ClapTrap::setAttDamage(size_t amount)
{
    attDamage = amount;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap destructor is called for: " << name << std::endl;
}
