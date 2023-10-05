/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 18:02:09 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/02 19:43:10 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

Animal::Animal() : type("animal")
{
    std::cout << "Animal" << " default constructor called." << std::endl;
}

Animal::Animal(const Animal &animal)
{
    *this = animal;
}

Animal &Animal::operator = (const Animal &animal)
{
    if (this == &animal)
        return (*this);
    type = animal.type;
    return (*this);
}

std::string Animal::getType(void) const
{
    return (type);
}

void Animal::makeSound(void) const
{
    std::cout << "I don't say too much!" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal" << " default destructor called." << std::endl;
}
