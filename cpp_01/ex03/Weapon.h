/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 11:49:27 by eabdelha          #+#    #+#             */
/*   Updated: 2022/07/25 11:00:37 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>
# include <iomanip>
# include <string>


class Weapon
{
    std::string type;
    
    public :
        Weapon(std::string type);
        const   std::string &getType() const;
        void    setType(const std::string &type);
        ~Weapon();
};

#endif