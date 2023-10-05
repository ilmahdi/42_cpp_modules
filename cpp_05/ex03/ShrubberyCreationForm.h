/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 12:05:50 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/23 17:01:38 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

# include <iostream>
# include <iomanip>
# include <string>
# include "Form.h"

class ShrubberyCreationForm : public Form
{
    std::string target;
    
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &form);
        ShrubberyCreationForm &operator = (const ShrubberyCreationForm &form);
        std::string	getTarget(void) const;
        void execute(Bureaucrat const & executor) const;
        ~ShrubberyCreationForm();
};

#endif