/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionTypes.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 07:39:03 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/25 10:15:33 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConversionTypes.h"

ConversionTypes::ConversionTypes() : number(0), _char(0){}

ConversionTypes::ConversionTypes(const ConversionTypes &conversiontypes)
{
    *this = conversiontypes;
}

ConversionTypes &ConversionTypes::operator = (const ConversionTypes &conversiontypes)
{
    if (this == &conversiontypes)
        return (*this);
    number = conversiontypes.number;
    return (*this);
}

void ConversionTypes::toChar(long double number)
{
    std::cout << "char: ";
    if (number >= 0 && number < 256)
    {
        if (isprint(number))
            std::cout << "'" << static_cast<char>(number) << "'" << std::endl;
        else 
            std::cout << "Non displayable" << std::endl;
    }
    else
        std::cout << "impossible" << std::endl;
}

void ConversionTypes::toInt(long double number)
{
    std::cout << "int: ";
    if (number <= INT_MAX && number >= INT_MIN && !_char)
    {
        std::cout << static_cast<int>(number) << std::endl;
    }
    else
        std::cout << "impossible" << std::endl;
}

void ConversionTypes::toFloat(long double number)
{
    std::cout << "float: ";
    if ((number <= FLT_MAX && number >= -FLT_MAX && !_char) || isnan(number) || isinf(number))
    {
        std::cout << std::fixed << std::setprecision(1) << static_cast<float>(number) << "f" << std::endl;
    }
    else
        std::cout << "impossible" << std::endl;
}

void ConversionTypes::toDouble(long double number)
{
    std::cout << "double: ";
    if ((number <= DBL_MAX && number >= -DBL_MAX && !_char) || isnan(number) || isinf(number))
    {
        std::cout << std::fixed << std::setprecision(1) << static_cast<double>(number) << std::endl;
    }
    else
        std::cout << "impossible" << std::endl;
}

 void ConversionTypes::convert(std::string arg)
{
    try {
        number = std::stold(arg);
    }
    catch (std::invalid_argument& e) {
        _char = 1;
        if (arg.length() == 1)
            number = static_cast<long double>(arg[0]);
        else 
            number = -1.0;
    }
    catch (std::out_of_range& e) {
        _char = 1;
        number = -1.0;
    }
    toChar(number);
    toInt(number);
    toFloat(number);
    toDouble(number);   
}

ConversionTypes::~ConversionTypes(){}
