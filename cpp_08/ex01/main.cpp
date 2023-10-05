/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 08:36:06 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/27 15:28:04 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.h"
#include <cstdlib>
#include <ctime>

int main()
{
    std::srand(std::time(0));
    Span numbers1(10000);
    Span numbers2(10000);
    std::vector<int> vec;

    std::cout << std::endl << "test by addNumber versin 1 :\n";
    std::cout << "------------------------------\n";
    try
    {
        for	(size_t i = 0; i < 10000; i++)
        {
            numbers1.addNumber(static_cast<size_t>(std::rand() % 900000000));
            vec.push_back(numbers1[i]);
        }
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try 
    {
        std::cout << "longestSpan of numbers: " << numbers1.longestSpan() << std::endl;
        std::cout << "shortestSpan of numbers: " << numbers1.shortestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl << "test by addNumber versin 2:\n";
    std::cout << "------------------------------\n";
    try
    {
        numbers2.addNumber(vec.begin(), vec.end());
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try 
    {
        std::cout << "longestSpan of numbers: " << numbers2.longestSpan() << std::endl;
        std::cout << "shortestSpan of numbers: " << numbers2.shortestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return(0);
}
