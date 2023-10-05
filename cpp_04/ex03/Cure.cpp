/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 07:08:37 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/06 16:35:14 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.h"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure" << " default constructor called." << std::endl;
}

Cure::Cure(const Cure &cure) : AMateria(cure.getType())
{
    std::cout << "Cure" << " copy constructor called." << std::endl;
}

Cure &Cure::operator = (const Cure &cure)
{
    (void)cure;
    return (*this);
}

AMateria* Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Cure" << " default destructor called." << std::endl;
}
