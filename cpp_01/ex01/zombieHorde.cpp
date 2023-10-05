/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 11:04:30 by eabdelha          #+#    #+#             */
/*   Updated: 2022/07/24 11:17:18 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"


Zombie*    zombieHorde(int N, std::string name)
{
    Zombie  *zom;

    zom = new Zombie[N];
    for(int i = 0; i < N; i++)
        zom[i].setName(name);
    return (zom);    
}