/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:22:00 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/17 15:28:35 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for(size_t i = 1; i < (size_t)ac; i++)
        {
            std::string str(av[i]);
            for(size_t j = 0; j < (size_t)str.length(); j++)
                std::cout << (char)std::toupper(str[j]);
        }
    }
    std::cout << std::endl;
    return (0);
}
