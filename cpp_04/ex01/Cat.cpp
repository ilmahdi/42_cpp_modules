/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 18:02:06 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/04 18:41:43 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"

Cat::Cat() : Animal()
{
    std::cout << "Cat" << " default constructor called." << std::endl;
    type = "cat";
    brain = new Brain();
}

Cat::Cat(const Cat &cat) : Animal()
{
    if (this == &cat)
        return ;
    type = cat.type;
    brain = new Brain(*cat.brain);
}

Cat &Cat::operator = (const Cat &cat)
{
    if (this == &cat)
        return (*this);
    Brain *holBrain;

    type = cat.type;
    holBrain = brain;
    brain = new Brain(*cat.brain);
    delete holBrain;
    return (*this);
}

Brain * Cat::getBrain(void) const
{
    return (brain);
}

void Cat::makeSound(void) const
{
    std::cout << "myyyyyyyyaw" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat" << " default destructor called." << std::endl;
    delete brain;
}
