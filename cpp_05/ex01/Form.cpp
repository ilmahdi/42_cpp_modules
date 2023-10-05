/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 09:45:05 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/24 12:40:46 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.h"

Form::Form() :
    name("form") , isSigned(0) , gradeToSign(150) , gradeToExec(150)
{
    std::cout << "Form" << " default constructor called." << std::endl;
}

Form::Form(std::string const name, const int gradeToSign, const int gradeToExec) :
    name(name) , isSigned(0) , gradeToSign(gradeToSign), gradeToExec(gradeToExec)
{
    std::cout << "Form" << " constructor called." << std::endl;
    if (gradeToSign < 1 || gradeToExec < 1)
		throw GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExec > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &form) :
    name(form.name) , isSigned(0) , gradeToSign(form.gradeToSign), gradeToExec(form.gradeToExec)
{
    std::cout << "Form" << " copy constructor called." << std::endl;
}

Form &Form::operator = (const Form &form)
{
    if (this == &form)
        return (*this);
    isSigned = form.isSigned;
    return (*this);
}

std::string Form::getName(void) const
{
    return (name);
}

bool Form::getIsSigned(void) const
{
    return (isSigned);
}

int Form::getGradeToSign(void) const
{
    return (gradeToSign);
}

int Form::getGradeToExec(void) const
{
    return (gradeToExec);
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > gradeToSign)
        throw (GradeTooLowException());
    isSigned = 1;
}

const char *Form::GradeTooHighException::what() const throw()
{
     return("too high grade!");
}

const char *Form::GradeTooLowException::what() const throw()
{
     return("too low grade!");
}

Form::~Form()
{
    std::cout << "Form" << " default destructor called." << std::endl;
}

std::ostream &operator << (std::ostream &out, const Form &form)
{
    std::cout << "Form: " << form.getName() << " require a grade of " << form.getGradeToSign()
    << " to sign it and " << form.getGradeToExec() << " to execute it, it's ";
    if (form.getIsSigned())
        std::cout << "currently signed.";
    else
        std::cout << "not signed yet.";
    return (out);
}
