/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:38:37 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/23 17:01:15 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>
# include <time.h>
# include "Form.h"

class RobotomyRequestForm : public Form
{
    std::string target;
    
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &form);
        RobotomyRequestForm &operator = (const RobotomyRequestForm &form);
        std::string	getTarget(void) const;
        void execute(Bureaucrat const & executor) const;
        ~RobotomyRequestForm();
};

#endif