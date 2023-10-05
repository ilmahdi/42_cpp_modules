/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:40:12 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/25 18:10:29 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.h"

int main(void)
{
    char        c[5] = "leet";
    int         n[5] = {13, 37, 42, 1337, 133742};
    std::string s[5] = {"Lorem", "ipsum", "dolor", "sit", "amet"};

    iter(c, 5, &put);
    std::cout << std::endl;
    iter(n, 5, &put);
    std::cout << std::endl;
    iter(s, 5, &put);
    std::cout << std::endl;
    return (0);
}
