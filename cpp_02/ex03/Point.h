/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 21:18:49 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/19 16:54:24 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

# include <iostream>
# include <string>
# include "Fixed.h"

class Point
{
    Fixed const x;
    Fixed const y;
    
    public:
        Point();
        Point(Fixed x, Fixed y);
        Point(const float x, const float y);
        Point(const Point &point);
        Point &operator = (const Point &point);
        Point  const  operator - (Point const &point) const;
        static Fixed  crossPro(Point const u, Point const v);
        ~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif