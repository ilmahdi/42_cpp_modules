/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:58:21 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/22 15:19:23 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

# include <iostream>
# include <string>
# include "AAnimal.h"
# include "Brain.h"


class Dog : public AAnimal
{
    Brain *brain;

    public:
        Dog();
        Dog(const Dog &dog);
        Dog &operator = (const Dog &dog);
        Brain *getBrain(void) const;
        void makeSound(void) const;
        ~Dog();
};

#endif