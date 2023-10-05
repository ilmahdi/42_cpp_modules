/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 10:12:15 by eabdelha          #+#    #+#             */
/*   Updated: 2022/07/25 10:41:45 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.h"

class HumanB
{
    std::string name;
    Weapon      *weapon;
    
    public :
        HumanB(std::string name);
        const   std::string &getName() const;
        void    setName(std::string name);
        void    setWeapon(Weapon &weapon);
        void    attack();
        ~HumanB();
};

#endif