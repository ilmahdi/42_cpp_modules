/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 09:54:17 by eabdelha          #+#    #+#             */
/*   Updated: 2022/07/24 11:16:57 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(void)
{
    Zombie *zom = NULL;

    zom = zombieHorde(NZOM, "bully");
    for (int i = 0; i < NZOM; i++)
        zom[i].announce();
    delete[] zom;
    return (0);
}