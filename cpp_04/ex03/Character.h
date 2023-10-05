/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 07:36:14 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/06 12:13:06 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

# include <iostream>
# include <string>
# include "ICharacter.h"
# include "AMateria.h"

class Character : public ICharacter
{
    AMateria    **inventory;
    std::string name;

    public:
        Character();
        Character(std::string name);
        Character(const Character &character);
        Character &operator = (const Character &character);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        ~Character();
};

#endif