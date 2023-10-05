/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 07:29:05 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/25 18:53:06 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

# include <string>
# include <iostream>
# include <stdexcept>

template<typename T> class Array
{
    T       *array;
    size_t  n;
    
    public:
        Array() : array(nullptr), n(0) {};
        Array(size_t size) : array(new T[size]()), n(size) {};
        Array(const Array &ref) : array(nullptr) { *this = ref; };
        ~Array(){ delete [] array; };
        
        Array &operator = (const Array &ref) {
            delete [] array;
            n = ref.n;
            array = new T[n]();
            for (size_t i = 0; i < n; i++)
                array[i] = ref.array[i];
            return (*this);
        };
        
        T &operator[](size_t index) const {
            if (index >= n || index < 0)
                throw (std::out_of_range("error: Bad access index!."));
            return (array[index]);
        };

        size_t size(void) const { return (n); };    
};

#endif