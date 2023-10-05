/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 08:34:28 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/29 14:47:27 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

# include <algorithm>
# include <iostream>
# include <string>
# include <vector>

class Span
{
    typedef std::vector<int>::iterator  iterator;
    typedef std::vector<int>            type_name;
    
    type_name     numbers;
    unsigned int  size;
  
    public:
        Span(unsigned int n);
        Span(const Span &span);
        Span &operator = (const Span &span);
        int const &operator[](int index) const ;
        void addNumber(int num);
        void addNumber(iterator begin, iterator end);
        size_t shortestSpan(void);
        size_t longestSpan(void);   
        class noSpan : public std::exception {
          const char *what() const throw();  
        };
        ~Span();
};

#endif
