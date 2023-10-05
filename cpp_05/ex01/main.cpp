/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 08:42:58 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/07 11:44:32 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"
#include "Form.h"

int main()
{
	Bureaucrat ali("ali", 3);
	Bureaucrat ahmed("ahmed", 15);
	Form	f0("f0", 1, 1);
	Form	f1("f1", 10, 1);
	Form	f2("f2", 100, 1);
	Form	f3("f3", 14, 1);
	
	std::cout << "\nCONSTRUCTION " << std::endl;
	std::cout << "------------" << std::endl;
    std::cout << "    gradeToSign 0:\n{" << std::endl;
	try
	{
        std::cout << "      ";
		Form	f3("f3", 0, 15);

	}
	catch (std::exception & e)
	{
        std::cout << "      ";
		std::cout << e.what();
	}
    
	std::cout << "\n}\n    gradeToExec 151:\n{" << std::endl;
	try
	{
        std::cout << "      ";
		Form	f4("f4", 11, 151);
	}
	catch (std::exception & e)
	{
        std::cout << "      ";
		std::cout << e.what();
	}
 
	std::cout << "\n}\n";
	std::cout << "\nSIGNE FORM" << std::endl;
	std::cout << "-------------" << std::endl;
    std::cout << "    valid signe\n{" << std::endl;
	
	
    std::cout << "      ";
	ali.signForm(f1);
	std::cout << "      " << f1 << std::endl;
	
	std::cout << "      ";
	ahmed.signForm(f2);
	std::cout << "      " << f2 << std::endl;

	std::cout << "\n}\n";
	std::cout << "    invalid signe\n{" << std::endl;

	std::cout << "      ";
	ali.signForm(f0);
	std::cout << "      " << f0 << std::endl;
	
	std::cout << "      ";
	ahmed.signForm(f3);
	std::cout << "      " << f3 << std::endl;

	std::cout << "\n}\n";
    
	return (0);
}
