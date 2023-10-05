/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 08:41:58 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/06 11:44:02 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

# include <iostream>
# include <string>
# include "ICharacter.h"

class ICharacter;

class AMateria
{
    protected:
        std::string type;

    public:
        AMateria(std::string const & type);
        AMateria(const AMateria &amateria);
        AMateria &operator = (const AMateria &amateria);
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
        virtual ~AMateria();
};

#endif
