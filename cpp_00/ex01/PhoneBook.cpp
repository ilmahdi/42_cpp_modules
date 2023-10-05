/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 19:56:23 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/17 16:10:46 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

PhoneBook::PhoneBook()
{
    index = 0;
    ContactNum = 0;
}
        
PhoneBook::~PhoneBook(){}

void    DisplayHeader()
{
    std::cout << " ___________________________________________ " << std::endl;
    std::cout << "|     Index| FirstName|  LastName|  NickName|" << std::endl;
    std::cout << " ------------------------------------------- " << std::endl;

}

void    PhoneBook::DisplayContact()
{
    std::string StrIndex;
    int         NumIndex;
    
    DisplayHeader();
    for(int i = 0; i < ContactNum; i++)
        contacts[i].DisplayList(i + 1);
    std::cout << std::endl << "Enter the contact index:" << std::endl << "=> ";
    if (!std::getline(std::cin, StrIndex))
        exit(0);
    if (StrIndex.empty())
        std::cerr << "  Skiped search!" << std::endl;
    else if (StrIndex.length() > 1)
        std::cerr << "  Invalid index!" << std::endl;
    else if (!(StrIndex.find_first_not_of("12345678") == std::string::npos))
        std::cerr << "  Out of range index!" << std::endl;
    else
    {
        NumIndex = std::stoi(StrIndex);
        if (NumIndex > ContactNum)
            std::cerr << "  Non existing contact!" << std::endl;
        else
            contacts[NumIndex - 1].DisplayInformations();
    }
}

void    PhoneBook::AddContact()
{
    contacts[index].FillInformations();
    if (!contacts[index].CheckEmptyContact())
        std::cout << "  Contact not added: empty fildes!" << std::endl;
    else
    {
        std::cout << "  Contact added successfully!" << std::endl;
        index++;
        if (ContactNum != 8)
            ContactNum++;
    }   
    if (index == 8)
       index = 0;
}
