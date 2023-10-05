/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 09:45:03 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/23 17:00:11 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

# include <iostream>
# include <fstream>
# include <string>
# include "Bureaucrat.h"

class Bureaucrat;

class Form
{
   std::string const    name;
   bool                 isSigned;
   const int            gradeToSign; 
   const int            gradeToExec; 
   
    public:
        Form();
        Form(const Form &form);
        Form(std::string const name, const int gradeToSign, const int gradeToExec); 
        Form &operator = (const Form &form);
        std::string getName(void) const;
        bool getIsSigned(void) const;
        int getGradeToSign(void) const;
        int getGradeToExec(void) const;
        class GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw();
        };
        class FormNotSigned : public std::exception
        {
            public:
                const char *what() const throw();
        };
        void beSigned(const Bureaucrat &bureaucrat);
        virtual void execute(Bureaucrat const & executor) const = 0;
        virtual ~Form();
};

std::ostream &operator << (std::ostream &out, const Form &form);

#endif