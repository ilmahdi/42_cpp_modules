/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 12:05:52 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/24 11:09:43 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyForm", 145, 137) , target("shrubbery")
{
    std::cout << "ShrubberyCreationForm" << " default constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyForm", 145, 137) , target(target)
{
    std::cout << "ShrubberyCreationForm" << " constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form) :
    Form("ShrubberyForm", 145, 137) , target(form.target)
{
     std::cout << "ShrubberyCreationForm" << " copy constructor called." << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator = (const ShrubberyCreationForm &form)
{
    if (this == &form)
        return (*this);
    target = form.target;
    return (*this);
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (target);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > getGradeToExec())
        throw(GradeTooLowException());
    if (!getIsSigned())
        throw(FormNotSigned());
    
    std::string strTree = "\
               ,@@@@@@@,\n\
       ,,,.   ,@@@@@@/@@,  .oo8888o.\n\
    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n\
   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n\
   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n\
   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n\
   `&%\\ ` /%&'    |.|        \\ '|8'\n\
       |o|        | |         | |\n\
       |.|        | |         | |\n\
    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n";

    std::ofstream outfile(target + "_shrubbery");

    if (outfile.is_open())
        outfile << strTree;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm" << " default destructor called." << std::endl;
}
