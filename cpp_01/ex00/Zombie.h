/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 09:55:13 by eabdelha          #+#    #+#             */
/*   Updated: 2022/07/24 10:47:33 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <iomanip>
# include <string>

class Zombie
{
    std::string name;
    
    public:
        Zombie();
        Zombie(std::string name);
        void announce(void);
        void setName(std::string name);
        std::string getName()  const;
        ~Zombie();
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif