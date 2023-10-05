/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:58:10 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/04 18:40:31 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"

Dog::Dog() : Animal()
{
    std::cout << "Dog" << " default constructor called." << std::endl;
    type = "dog";
    brain = new Brain();
}

Dog::Dog(const Dog &dog) : Animal()
{
   if (this == &dog)
        return ;

    type = dog.type;
    brain = new Brain(*dog.brain);
}

Dog &Dog::operator = (const Dog &dog)
{
    if (this == &dog)
        return (*this);
    Brain *holBrain;

    type = dog.type;
    holBrain = brain;
    brain = new Brain(*dog.brain);
    delete holBrain;
    return (*this);
}

Brain * Dog::getBrain(void) const
{
    return (brain);
}

void Dog::makeSound(void) const
{
    std::cout << "haw haw haw" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog" << " default destructor called." << std::endl;
    delete brain;
}
