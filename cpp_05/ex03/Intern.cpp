/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:00:07 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/24 12:02:40 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.h"

Intern::Intern()
{
    std::cout << "Intern" << " default constructor called." << std::endl;
}


Intern::Intern(const Intern &intern)
{
    std::cout << "Intern" << " copy constructor called." << std::endl;
    (void)intern;
}

Intern &Intern::operator = (const Intern &intern)
{
    (void)intern;
    return (*this);
}

Form *makeShrubberyForm(std::string target)
{
    return(new ShrubberyCreationForm(target));
}

Form *makeRobotomyForm(std::string target)
{
    return(new RobotomyRequestForm(target));
}

Form *makePardonForm(std::string target)
{
    return(new PresidentialPardonForm(target));
}


Form *Intern::makeForm(std::string form, std::string target)
{
    std::string strsForms[3] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };
    
    Form* (*Forms[3])(std::string) = {
        &makeShrubberyForm,
        &makeRobotomyForm,
        &makePardonForm
    };
    
    for (size_t i = 0; i < 3; i++)
        if (strsForms[i] == form)
            return(Forms[i](target));
    
    throw FormArgException();
}

const char *Intern::FormArgException::what() const throw()
{
    return("the form name passed as parameter doesn't exist");
}

Intern::~Intern()
{
    std::cout << "Intern" << " default destructor called." << std::endl;
}
