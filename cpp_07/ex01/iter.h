/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:35:50 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/25 18:52:41 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

# include <string>
# include <iostream>

template<typename T> void iter (T *ptr, size_t length, void (*f)(T const &))
{
    for (size_t i = 0; i < length; i++)
        f(ptr[i]);
}

template<typename T> void put(T const &e)
{
    std::cout << e  << " ";
}

#endif 
