/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 18:02:12 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/02 19:44:07 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

# include <iostream>
# include <string>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal &animal);
        Animal &operator = (const Animal &animal);
        std::string getType(void) const;
        virtual void makeSound(void) const;
        virtual ~Animal();
};

#endif