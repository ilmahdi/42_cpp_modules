/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 17:54:32 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/25 18:52:48 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
#define WHATEVER_H

# include <string>
# include <iostream>

template<typename T> void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template<typename T> T min(T a, T b)
{
    return ((a < b) ? a : b);
}

template<typename T> T max(T a, T b)
{
    return ((a > b) ? a : b);
}

#endif