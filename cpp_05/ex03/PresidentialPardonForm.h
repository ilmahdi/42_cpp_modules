/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 15:03:58 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/23 17:00:50 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

# include <iostream>
# include <iomanip>
# include <string>
# include "Form.h"

class PresidentialPardonForm : public Form
{
    std::string target;
    
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &form);
        PresidentialPardonForm &operator = (const PresidentialPardonForm &form);
        std::string	getTarget(void) const;
        void execute(Bureaucrat const & executor) const;
        ~PresidentialPardonForm();
};

#endif