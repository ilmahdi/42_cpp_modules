/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 09:09:31 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/22 15:59:22 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.h"

MateriaSource::MateriaSource() : learnedMateria(new AMateria*[4])
{
    std::cout << "MateriaSource" << " default constructor called." << std::endl;
    for (size_t i = 0 ; i < 4; i++)
        learnedMateria[i] = nullptr;    
}

MateriaSource::MateriaSource(const MateriaSource &materiasource) : learnedMateria(new AMateria*[4])
{
    for (size_t i = 0 ; i < 4; i++)
        learnedMateria[i] = materiasource.learnedMateria[i]->clone();
}

MateriaSource &MateriaSource::operator = (const MateriaSource &materiasource)
{
    if (this == &materiasource)
        return (*this);
    for (size_t i = 0 ; i < 4; i++)
    {
        delete learnedMateria[i];
        learnedMateria[i] = materiasource.learnedMateria[i]->clone();
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (!m)
        return ;
    for (size_t i = 0 ; i < 4; i++)
        if (!learnedMateria[i])
            return (learnedMateria[i] = m, (void)0);
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (size_t i = 0 ; i < 4 && learnedMateria[i]; i++)
        if (learnedMateria[i]->getType() == type)
            return(learnedMateria[i]->clone());
    return(nullptr);
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource" << " default destructor called." << std::endl;
    for (size_t i = 0 ; i < 4; i++)
        delete learnedMateria[i];

    delete [] learnedMateria;
}
