/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 07:08:41 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/06 07:08:42 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
#define CURE_H

# include <iostream>
# include <string>
# include "AMateria.h"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(const Cure &cure);
        Cure &operator = (const Cure &cure);
        AMateria* clone() const;
        void use(ICharacter& target);
        ~Cure();
};

#endif