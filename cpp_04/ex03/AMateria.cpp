/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 08:42:00 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/06 13:42:21 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.h"

AMateria::AMateria(std::string const & type)  : type(type)
{
    std::cout << "AMateria" << " default constructor called." << std::endl;
}

AMateria::AMateria(const AMateria &amateria) : type(amateria.type)
{
   std::cout << "AMateria" << " copy constructor called." << std::endl;
}

AMateria &AMateria::operator = (const AMateria &amateria)
{
    (void)amateria;
    return (*this);
}

std::string const & AMateria::getType() const
{
    return(type);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}

AMateria::~AMateria()
{
    std::cout << "AMateria" << " default destructor called." << std::endl;
}
