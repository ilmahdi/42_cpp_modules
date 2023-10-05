/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 08:42:58 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/07 09:28:44 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

int main()
{
	std::cout << "\nCONSTRUCTION " << std::endl;
	std::cout << "------------" << std::endl;
    std::cout << "    grade 0:\n{" << std::endl;
	try
	{
        std::cout << "      ";
		Bureaucrat ali("ali", 0);
	}
	catch (std::exception & e)
	{
        std::cout << "      ";
		std::cout << e.what();
	}
    
	std::cout << "\n}\n    grade 151:\n{" << std::endl;
	try
	{
        std::cout << "      ";
		Bureaucrat ali("ali", 151);
	}
	catch (std::exception & e)
	{
        std::cout << "      ";
		std::cout << e.what();
	}
    
	std::cout << "\n}\n";
	std::cout << "\nINCREMENT/DECREMENT" << std::endl;
	std::cout << "-------------------" << std::endl;
    std::cout << "    increment\n{" << std::endl;
    std::cout << "      ";
    {
        Bureaucrat ahmed("ahmed", 1);
        try
        {
        	ahmed.incrementGrade();
        }
        catch (std::exception & e)
        {
            std::cout << "      ";
        	std::cout << e.what();
        }
        std::cout << "\n      ";
    }
    std::cout << "\n}\n";
    std::cout << "    decrement\n{" << std::endl;
    std::cout << "      ";
	Bureaucrat ahmed("ahmed", 150);
	try
	{
		ahmed.decrementGrade();
	}
	catch (std::exception & e)
	{
        std::cout << "      ";
		std::cout << e.what();
	}

	std::cout << "\n}\n";
    std::cout << "\noverload operator '<<'" << std::endl;
	std::cout << "----------------------" << std::endl;
    std::cout << "      ";
	std::cout << ahmed;
	std::cout << std::endl << std::endl;
    
	return (0);
}