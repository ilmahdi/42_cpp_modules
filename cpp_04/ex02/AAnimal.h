/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 18:02:12 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/22 15:18:41 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
#define AANIMAL_H

# include <iostream>
# include <string>

class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(const AAnimal &aanimal);
        AAnimal &operator = (const AAnimal &aanimal);
        std::string getType(void) const;
        virtual void makeSound(void) const = 0;
        virtual ~AAnimal();
};

#endif
