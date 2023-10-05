/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 08:42:58 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/07 17:14:56 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"
#include "Form.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"


int main()
{
	std::srand(time(0));
	ShrubberyCreationForm	Shrubbery("Shrubbery");
	RobotomyRequestForm		Robotomy("Robotomy");
	PresidentialPardonForm	Pardon("Pardon");
	Bureaucrat				ali("ali", 1);
	Bureaucrat				ahmed("ahmed", 2);
	Bureaucrat				samir("samir", 100);

	std::cout << std::endl;
	
	std::cout << "\nShrubberyCreationForm" << std::endl;
	std::cout << "----------------------" << std::endl;
    std::cout << "    unsigned Form:{\n" << std::endl;
	
		ali.executeForm(Shrubbery);

	std::cout << "}\n\n    signed Form:{\n" << std::endl;

		ahmed.signForm(Shrubbery);
		ahmed.executeForm(Shrubbery);

 
	std::cout << "}\n\n";

	
	std::cout << "\nRobotomyRequestForm" << std::endl;
	std::cout << "--------------------" << std::endl;
    std::cout << "    unsigned Form:{\n" << std::endl;
	
	ali.executeForm(Robotomy);
	
	std::cout << "}\n\n    signed Form:{\n" << std::endl;

		ahmed.signForm(Robotomy);
		ahmed.executeForm(Robotomy);

	std::cout << "}\n\n";


	std::cout << "\nPresidentialPardonForm" << std::endl;
	std::cout << "-----------------------" << std::endl;
    std::cout << "    unsigned Form:{\n" << std::endl;
	
		ali.executeForm(Pardon);
	
	std::cout << "}\n\n    signed Form:{\n" << std::endl;

		ahmed.signForm(Pardon);
		ahmed.executeForm(Pardon);

	std::cout << "}\n\n";

	 std::cout << "    low grade:{\n" << std::endl;
	 
		samir.executeForm(Pardon);
	
	std::cout << "}\n\n";
	
    
	return (0);
}
