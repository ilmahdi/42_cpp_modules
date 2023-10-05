/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 10:35:51 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/06 16:35:21 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.h"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice" << " default constructor called." << std::endl;
}

Ice::Ice(const Ice &ice) : AMateria(ice.getType())
{
    std::cout << "Ice" << " copy constructor called." << std::endl;
}

Ice &Ice::operator = (const Ice &ice)
{
    (void)ice;
    return (*this);
}

AMateria* Ice::clone() const
{
    return (new Ice());
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice" << " default destructor called." << std::endl;
}
