/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 08:39:05 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/09 11:29:09 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConversionTypes.h"

int main(int ac, char **av)
{
    if (ac != 2)
        return (std::cerr << "Invalid number of arguments!" << std::endl, 1);
    ConversionTypes literals;
    literals.convert(av[1]);
    return (0);
}