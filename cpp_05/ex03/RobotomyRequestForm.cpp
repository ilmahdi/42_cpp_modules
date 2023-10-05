/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:38:35 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/24 11:09:36 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyForm", 72, 45) , target("request")
{
    std::cout << "RobotomyRequestForm" << " default constructor called." << std::endl;
    
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyForm", 72, 45) , target(target)
{
    std::cout << "RobotomyRequestForm" << " constructor called." << std::endl;
    
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &form) :
    Form("RobotomyForm", 72, 45) , target(form.target)
{
    std::cout << "RobotomyRequestForm" << " copy constructor called." << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator = (const RobotomyRequestForm &form)
{
    if (this == &form)
        return (*this);
    target = form.target;
    return (*this);
}

std::string	RobotomyRequestForm::getTarget(void) const
{
	return (target);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > getGradeToExec())
        throw(GradeTooLowException());
    if (!getIsSigned())
        throw(FormNotSigned());
    
    std::cout << "drill drill drill drill drill ..." <<std::endl;
    int request = std::rand() % 2;
    if (request)
        std::cout << target << " has been robotomized successfully!" << std::endl;
    else
        std::cout << target << " failed the robotomy!" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm" << " default destructor called." << std::endl;
}
