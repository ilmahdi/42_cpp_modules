/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 19:57:53 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/25 18:41:52 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.h"

void tests(void)
{
    char        c[5] = "leet";
    int         n[5] = {13, 37, 42, 1337, 133742};
    std::string s[5] = {"Lorem", "ipsum", "dolor", "sit", "amet"};
    
    Array<char>        C(5);
    Array<int>         N(5);
    Array<std::string> S(5);

    for (size_t i = 0; i < 5; i++)
        C[i] = c[i];
    for (size_t i = 0; i < 5; i++)
        N[i] = n[i];
    for (size_t i = 0; i < 5; i++)
        S[i] = s[i];
        
    Array<char> V;
    V = C;
    
    try
    {
        for (size_t i = 0; i < 6; i++)
        {
            if (V[i] != c[i])
                std::cout << V[i] << "no matching!\n";
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        for (size_t i = 0; i < 6; i++)
        {
            if (N[i] != n[i])
                std::cout << "no matching!\n";
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        for (size_t i = 0; i < 6; i++)
        {
            if (S[i] != s[i])
                std::cout << "no matching!\n";
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

int main(void)
{
	tests();
	// system("leaks array");
	return (0);
}
