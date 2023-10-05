/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 19:56:09 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/24 11:06:37 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

Bureaucrat::Bureaucrat() : name("unknown") , grade(150)
{
    std::cout << "Bureaucrat" << " default constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name) , grade(grade)
{
    std::cout << "Bureaucrat" << " constructor called." << std::endl;
    if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : name(bureaucrat.name) , grade(bureaucrat.grade)
{
    std::cout << "Bureaucrat" << " copy constructor called." << std::endl;
}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &bureaucrat)
{
    if (this == &bureaucrat)
        return (*this);
    grade = bureaucrat.grade;
    return (*this);
}

std::string Bureaucrat::getName(void) const
{
    return(name);
}

int Bureaucrat::getGrade(void) const
{
    return(grade);
}

void Bureaucrat::incrementGrade(void)
{
    if (grade == 1)
        throw (GradeTooHighException());
    grade--;
}

void Bureaucrat::decrementGrade(void)
{
    if (grade == 150)
        throw (GradeTooLowException());
    grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return("grade out of range!, 1 is highest possible grade.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return("grade out of range!, 150 is lowest possible grade.");
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << name << " signed " << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << name << " couldn't sign " << form.getName() << " because he has a " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(Form const & form)
{
    try
    {
        form.execute(*this);
        std::cout << name << " executed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat" << " default destructor called." << std::endl;
}

std::ostream &operator << (std::ostream &out, const Bureaucrat &bureaucrat)
{
    std::cout << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return (out);
}