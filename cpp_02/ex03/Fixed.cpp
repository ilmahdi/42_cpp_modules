/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:50:29 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/19 15:28:28 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

const int    Fixed::nbFractionalBits = 8;

Fixed::Fixed() : fpnValue(0){}

Fixed::Fixed(const int value)
{
    fpnValue = value * (1 << nbFractionalBits);
}

Fixed::Fixed(const float value)
{
    fpnValue = (int)roundf((value * (1 << nbFractionalBits)));
}

Fixed::Fixed(const Fixed &fixed) : fpnValue(fixed.getRawBits()){}

Fixed &Fixed::operator = (const Fixed &fixed)
{
    if (this == &fixed)
		return (*this);
    this->fpnValue = fixed.getRawBits();
    return (*this);
}

bool Fixed::operator > (const Fixed &fixed)
{
    return(fpnValue > fixed.fpnValue);
}

bool Fixed::operator >= (const Fixed &fixed)
{
    return(fpnValue >= fixed.fpnValue);
}

bool Fixed::operator < (const Fixed &fixed)
{
    return(fpnValue < fixed.fpnValue);
}

bool Fixed::operator <= (const Fixed &fixed)
{
    return(fpnValue <= fixed.fpnValue);
}

bool Fixed::operator == (const Fixed &fixed)
{
    return(fpnValue == fixed.fpnValue);
}

bool Fixed::operator != (const Fixed &fixed)
{
    return(fpnValue != fixed.fpnValue);
}

Fixed Fixed::operator + (const Fixed &fixed)
{
    Fixed ret;

    ret.fpnValue = (fpnValue + fixed.fpnValue);
    return(ret);
}

Fixed Fixed::operator - (const Fixed &fixed) const
{
    Fixed ret;

    ret.fpnValue = (fpnValue - fixed.fpnValue);
    return(ret);
}

Fixed Fixed::operator * (const Fixed &fixed) const
{
    Fixed ret;

    ret.fpnValue = (fpnValue * fixed.fpnValue) / ((1 << nbFractionalBits));
    return(ret);
}

Fixed Fixed::operator / (const Fixed &fixed)
{
    Fixed ret;

    ret.fpnValue = (fpnValue / fixed.fpnValue) * ((1 << nbFractionalBits));
    return(ret);
}

Fixed &Fixed::operator ++ (void)
{
    fpnValue++;
    return (*this);
}

Fixed Fixed::operator ++ (int)
{
    Fixed hol(*this);
    
    fpnValue++;
    return (hol);
}

Fixed &Fixed::operator -- (void)
{
    fpnValue--;
    return (*this);
}

Fixed Fixed::operator -- (int)
{
    Fixed hol(*this);
    
    fpnValue--;
    return (hol);
}

int Fixed::getRawBits(void) const
{
    return (this->fpnValue);
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

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
    if (f1 < f2)
        return (f1);
    return (f2);
}

Fixed &Fixed::min(Fixed const &f1, Fixed const &f2)
{
    if ((Fixed)f1 < (Fixed)f2)
        return ((Fixed&)f1);
    return ((Fixed&)f2);
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
    if (f1 > f2)
        return (f1);
    return (f2);
}

Fixed &Fixed::max(Fixed const &f1, Fixed const &f2)
{
    if ((Fixed)f1 > (Fixed)f2)
        return ((Fixed&)f1);
    return ((Fixed&)f2);
}

std::ostream &operator << (std::ostream &output, const Fixed &fixed)
{
    output << fixed.toFloat();
    return (output);
}

Fixed::~Fixed(){}
