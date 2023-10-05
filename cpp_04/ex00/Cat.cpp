/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 18:02:06 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/02 19:05:53 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"

Cat::Cat() : Animal() 
{
    type = "cat";
    std::cout << "Cat" << " default constructor called." << std::endl;
}

Cat::Cat(const Cat &cat) : Animal()
{
    *this = cat;
}

Cat &Cat::operator = (const Cat &cat)
{
    if (this == &cat)
        return (*this);
    type = cat.type;
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "myyyyyyyyaw" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat" << " default destructor called." << std::endl;
}
