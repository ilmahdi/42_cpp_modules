/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 16:30:54 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/21 15:44:17 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "ScavTrap.h"
# include "FragTrap.h"
# include <iostream>
# include <string>

class DiamondTrap : public ScavTrap , public FragTrap
{
    std::string name;
    
    public:
        using ScavTrap::attack;
        DiamondTrap(void);
        DiamondTrap(std::string _name);
        DiamondTrap(const DiamondTrap &diamondtrap);
        DiamondTrap &operator = (const DiamondTrap &diamondtrap);
        std::string getName(void) const;
        void setName(std::string _name);
        void whoAmI(void);
        ~DiamondTrap();
};

#endif