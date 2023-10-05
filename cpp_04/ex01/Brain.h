/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Barain.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 20:02:15 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/02 20:18:31 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BARIN_H
#define BARIN_H

# include <iostream>
# include <string>
# include <string>

class Brain
{
    std::string *ideas;
    
    public:
        Brain();
        Brain(const Brain &brain);
        Brain &operator = (const Brain &brain);
        std::string *getIdeas(void);
        ~Brain();
};

#endif