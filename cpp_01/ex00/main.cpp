/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 09:54:17 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/18 16:11:36 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(void)
{
    Zombie stackZom ("etern");
    
    stackZom.announce();
    Zombie *heapZom = NULL;

    heapZom = newZombie("hopyo");
    heapZom->announce();
    delete heapZom;

    randomChump("crisan");
    return (0);
}