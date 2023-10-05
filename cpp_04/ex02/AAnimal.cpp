/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 18:02:09 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/22 15:22:30 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.h"

AAnimal::AAnimal() : type("aanimal")
{
    std::cout << "AAnimal" << " default constructor called." << std::endl;
}

AAnimal::AAnimal(const AAnimal &aanimal)
{
    *this = aanimal;
}

AAnimal &AAnimal::operator = (const AAnimal &aanimal)
{
    if (this == &aanimal)
        return (*this);
    type = aanimal.type;
    return (*this);
}

std::string AAnimal::getType(void) const
{
    return (type);
}

void AAnimal::makeSound(void) const
{
    std::cout << "I don't say too much!" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal" << " default destructor called." << std::endl;
}
