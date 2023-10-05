/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 08:42:58 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/07 21:32:11 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"
#include "Form.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"
#include "Intern.h"

int main()
{	
	std::srand(time(0));
	Intern	intern;
	Form	*form;
	std::cout << std::endl;
	
	std::cout << "\nTntern make Form" << std::endl;
	std::cout << "------------------" << std::endl;
    std::cout << "    shrubbery creation:{\n" << std::endl;
	
		form = intern.makeForm("shrubbery creation", "robo");
		std::cout << *form << std::endl ;
 
	std::cout << "}\n\n";
	delete	form;


    std::cout << "\n    robotomy request:{\n" << std::endl;
	
	form = intern.makeForm("robotomy request", "robo");
	std::cout << *form  << std::endl;

	std::cout << "}\n\n";
	delete	form;

	
	std::cout << "\n    presidential pardon:{\n" << std::endl;

	form = intern.makeForm("presidential pardon", "president");
	std::cout << *form << std::endl;

	std::cout << "}\n\n";
	delete	form;
	form = nullptr;


    std::cout << "\n    unknown Form:{\n" << std::endl;
	
	try
	{
		form = intern.makeForm("Unknown", "drive");
		std::cout << *form << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "}\n\n";
	delete	form;
    
	return (0);
}
