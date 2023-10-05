/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:26:39 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/25 10:10:25 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CALSSES_H
#define CALSSES_H

# include <iostream>
# include <string>
# include <ctime>
# include <cstdlib>

class Base 
{
    public:
        virtual ~Base(){};
};

class A : public Base {};

class B : public Base {};

class C : public Base {};


#endif