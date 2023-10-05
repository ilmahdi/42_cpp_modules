/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:07:03 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/22 15:17:31 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

# include <iostream>
# include <string>
# include "AAnimal.h"
# include "Brain.h"


class Cat : public AAnimal
{
    Brain *brain;

    public:
        Cat();
        Cat(const Cat &cat);
        Cat &operator = (const Cat &cat);
        Brain *getBrain(void) const;
        void makeSound(void) const;
        ~Cat();
};

#endif