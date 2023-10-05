/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:50:29 by eabdelha          #+#    #+#             */
/*   Updated: 2022/07/29 16:07:47 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

Point::Point() : x(0), y(0){}

Point::Point(Fixed x, Fixed y): x(x), y(y){}

Point::Point(const float x, const float y): x(x), y(y){}

Point::Point(const Point &point): x(point.x), y(point.y){}

Point &Point::operator = (const Point &point)
{
     if (this == &point)
		return (*this);
    (Fixed)this->x = point.x;
    (Fixed)this->y = point.y;
    return (*this);
}

Point const Point::operator - (Point const &point) const
{
    return (Point((x - point.x), (y - point.y)));
}

Fixed  Point::crossPro(Point const u, Point const v)
{
    return (((Fixed)u.x * (Fixed)v.y) - ((Fixed)u.y * (Fixed)v.x));
}

Point::~Point(){}
