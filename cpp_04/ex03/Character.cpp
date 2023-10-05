/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 07:36:16 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/22 15:58:48 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.h"

Character::Character() : inventory(new AMateria*[4]) , name("patient")
{
    std::cout << "Character" << " default constructor called." << std::endl;
    for (size_t i = 0 ; i < 4; i++)
        inventory[i] = nullptr;    
}

Character::Character(std::string name) : inventory(new AMateria*[4]) , name(name)
{
    std::cout << "Character" << " constructor called." << std::endl;
    for (size_t i = 0 ; i < 4; i++)
        inventory[i] = nullptr;    
}

Character::Character(const Character &character) : inventory(new AMateria*[4]) , name(character.getName())
{
    std::cout << "Character" << " copy constructor called." << std::endl;
    size_t i;
    
    for (i = 0 ; i < 4 && character.inventory[i]; i++)
        inventory[i] = character.inventory[i]->clone();
    for (size_t j = i ; j < 4; j++)
        inventory[j] = nullptr;    
}

Character &Character::operator = (const Character &character)
{
    if (this == &character)
        return (*this);
        
    for (size_t i = 0 ; i < 4 && character.inventory[i]; i++)
    {
        delete inventory[i];
        inventory[i] = character.inventory[i]->clone();
    }
    return (*this);
}

std::string const &Character::getName() const
{
    return (name);
}

void Character::equip(AMateria* m)
{
    if (!m)
        return ;
    for (size_t i = 0 ; i < 4; i++)
        if (!inventory[i])
            return (inventory[i] = m, (void)0);
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 4 || !inventory[idx])
        return ;
    inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 4 || !inventory[idx])
        return ;
    inventory[idx]->use(target);
}

Character::~Character()
{
    std::cout << "Character" << " default destructor called." << std::endl;
    for (size_t i = 0 ; i < 4; i++)
        delete inventory[i];
        
    delete [] inventory;
}
