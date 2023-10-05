/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:06:19 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/22 15:06:20 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

# include <iostream>
# include <string>
# include "Animal.h"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat &cat);
        Cat &operator = (const Cat &cat);
        void makeSound(void) const;
        ~Cat();
};

#endif