/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 19:56:23 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/17 16:18:28 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <string>

class Contact
{
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;
    std::string DarkestSecret;
    
    public:
        Contact();
        ~Contact();
        void FillInformations();
        void DisplayList(int index);
        void DisplayInformations();
        bool CheckEmptyContact();
};

#endif
