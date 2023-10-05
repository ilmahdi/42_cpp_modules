/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:19:16 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/18 15:57:15 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.h"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Invalid number of argument" << std::endl;
        return (1);
    }
    Replace replace(av[1], av[2], av[3]);
    
    replace.replace();
    return (0);
}