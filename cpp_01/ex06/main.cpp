/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:19:16 by eabdelha          #+#    #+#             */
/*   Updated: 2022/07/26 09:25:49 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Invalid number of argument" << std::endl;
        return (1);
    }
    Harl comp;

    comp.halFilter(av[1]);
    return (0);
}