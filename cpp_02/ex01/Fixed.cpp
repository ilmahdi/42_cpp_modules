/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:50:29 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/01 19:14:18 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

const int    Fixed::nbFractionalBits = 8;

Fixed::Fixed() : fpnValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    fpnValue = value * (1 << nbFractionalBits);
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" <<std::endl;
    fpnValue = (int)roundf((value * (1 << nbFractionalBits)));
}

Fixed::Fixed(const Fixed &fixed)
{    
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed &Fixed::operator = (const Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    fpnValue = fixed.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (fpnValue);
}

void Fixed::setRawBits(int const raw)
{
    fpnValue = raw;
}

float Fixed::toFloat( void ) const
{
    return ((float)fpnValue / (1 << nbFractionalBits));
}

int Fixed::toInt( void ) const
{
    return ((int)fpnValue / (1 << nbFractionalBits));
}

std::ostream &operator << (std::ostream &output, const Fixed &fixed)
{
    output << fixed.toFloat();
    return (output);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
