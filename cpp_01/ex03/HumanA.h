/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 09:45:40 by eabdelha          #+#    #+#             */
/*   Updated: 2022/07/26 11:12:55 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.h"

class HumanA
{
    std::string name;
    Weapon      &weapon;
    
    public :
        HumanA(std::string name, Weapon &weapon);
        const   std::string &getName() const;
        void    setName(std::string name);
        void    attack();
        ~HumanA();
};

#endif