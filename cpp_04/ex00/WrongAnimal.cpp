/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:02:46 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/02 19:48:05 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.h"

WrongAnimal::WrongAnimal() : type("Wronganimal")
{
    std::cout << "WrongAnimal" << " default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal)
{
    *this = wronganimal;
}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &wronganimal)
{
    if (this == &wronganimal)
        return (*this);
    type = wronganimal.type;
    return (*this);
}

std::string WrongAnimal::getType(void) const
{
    return (type);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "I don't say too much!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal" << " default destructor called." << std::endl;
}
