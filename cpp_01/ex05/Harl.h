/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 20:11:57 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/18 16:57:07 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <iostream>
# include <string>

typedef class Harl Harl;

struct t_levels
{
    std::string strLevel;
    void        (Harl::*funLevel)(void);
};

class Harl
{
    void        debug(void);
    void        info(void);
    void        warning(void);
    void        error(void);
    t_levels    levels[4];
    
    public:
        Harl();
        ~Harl();
        void    complain(std::string level);
};

#endif