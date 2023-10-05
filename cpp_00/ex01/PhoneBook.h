/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 19:56:23 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/17 16:14:32 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.h"
# include <iostream>
# include <string>

class PhoneBook
{
    Contact contacts[8];
    int     index;
    int     ContactNum;
    
    public:
        PhoneBook();
        ~PhoneBook();
        void AddContact();
        void DisplayContact();
};

#endif
