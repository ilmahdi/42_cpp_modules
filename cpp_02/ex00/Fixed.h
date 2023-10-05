/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:51:57 by eabdelha          #+#    #+#             */
/*   Updated: 2022/07/26 20:13:55 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <string>

class Fixed
{
    int                 fpnValue;
    static const int    nbFractionalBits;
    
    public:
        Fixed();
        Fixed(const Fixed &fixed);
        Fixed& operator = (const Fixed& fixed);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        ~Fixed();
};

#endif