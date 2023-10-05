/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 19:55:46 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/17 16:20:37 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

void check_operation(std::string operation, PhoneBook *phonebook)
{
    if (!operation.compare("ADD"))
        phonebook->AddContact();
    else if (!operation.compare("SEARCH"))
        phonebook->DisplayContact();
    else if (!operation.compare("EXIT"))
        std::exit(0);
}

int main(void)
{
    PhoneBook phonebook;
    std::string operation;
    
    while (true)
    {
        std::cout << "\rPhoneBook=> " << std::flush;
        if (!std::getline(std::cin, operation))
            std::exit(1);
        check_operation(operation, &phonebook);
    }
    return (0);
}
