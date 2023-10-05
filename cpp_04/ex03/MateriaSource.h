/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 09:09:32 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/06 09:40:12 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

# include <iostream>
# include <string>
# include "AMateria.h"
# include "IMateriaSource.h"

class MateriaSource : public IMateriaSource
{
    AMateria **learnedMateria;

    public:
        MateriaSource();
        MateriaSource(const MateriaSource &materiasource);
        MateriaSource &operator = (const MateriaSource &materiasource);
        void learnMateria(AMateria *m);
        AMateria* createMateria(std::string const & type);
        ~MateriaSource();
};

#endif