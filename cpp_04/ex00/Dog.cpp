/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:58:10 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/02 19:58:11 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"

Dog::Dog() : Animal()
{
    type = "dog";
    std::cout << "Dog" << " default constructor called." << std::endl;
}

Dog::Dog(const Dog &dog) : Animal()
{
    *this = dog;
}

Dog &Dog::operator = (const Dog &dog)
{
    if (this == &dog)
        return (*this);
    type = dog.type;
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << "haw haw haw" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog" << " default destructor called." << std::endl;
}
