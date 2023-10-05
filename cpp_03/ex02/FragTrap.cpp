/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 18:26:29 by eabdelha          #+#    #+#             */
/*   Updated: 2022/07/30 20:34:42 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"

FragTrap::FragTrap(void) : ClapTrap()
{
    std::cout << "FragTrap default constructor called." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap()
{
    this->name = name;
    hitPoint = 100;
    energy = 100;
    attDamage = 30;
    std::cout << "FragTrap constructor called for: " << name << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragtrap) : ClapTrap()
{
    *this = fragtrap;
    std::cout << "FragTrap copy constructor called." << std::endl;
}

FragTrap &FragTrap::operator = (const FragTrap &fragtrap)
{
    if (this == &fragtrap)
        return (*this);
    name = fragtrap.name;
    hitPoint = fragtrap.hitPoint;
    energy = fragtrap.energy;
    attDamage = fragtrap.attDamage;
    return (*this);
}

void FragTrap::attack(const std::string &target)
{
    std::cout << "FragTrap " << name;
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

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << ": high fives guys!." << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor is called for: " << name << std::endl;
}
