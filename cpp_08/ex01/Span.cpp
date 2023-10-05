/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 08:34:30 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/29 14:50:13 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.h"

Span::Span(unsigned int n) : size(n) {}

Span::Span(const Span &span)
{
    *this = span;
}

Span &Span::operator = (const Span &span)
{
    if (this == &span)
        return (*this);
    numbers = span.numbers;
    size = span.size;
    return (*this);
}

int const &Span::operator[](int index) const 
{
    if (index >= (int)size || index < 0)
        throw (std::out_of_range("unable to access element!"));
    return (numbers[index]);
}

void Span::addNumber(int num)
{
    if (numbers.size() >= size)
        throw (std::out_of_range("unable to add more elements!"));
    numbers.push_back(num);
}

void Span::addNumber(iterator begin, iterator end)
{
    for (iterator it = begin; it < end; it++)
        addNumber(*it);
}

size_t Span::shortestSpan(void)
{
    if (numbers.size() < 2)
        throw (noSpan());

    type_name   tmp(numbers);
    size_t      ret;

    std::sort(tmp.begin(), tmp.end());
    ret = -1;
    for (iterator it = tmp.begin(); it != tmp.end() - 1; it++)
        if (static_cast<size_t>(*(it + 1) - *it) < ret)
            ret = *(it + 1) - *it;
    return (ret); 
}

size_t Span::longestSpan(void)
{
    if (numbers.size() < 2)
        throw (noSpan());
    return (*std::max_element(numbers.begin(), numbers.end()) 
            - *std::min_element(numbers.begin(), numbers.end()));
}

const char *Span::noSpan::what() const throw()
{
    return ("No span can be found!!");
}

Span::~Span(){}