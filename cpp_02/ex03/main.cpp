/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:00:29 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/19 16:49:21 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"


int main(void)
{
	if (bsp(Point(Fixed(0), Fixed(0)), 
	Point(Fixed(0), Fixed(10)), 
	Point(Fixed(10), Fixed(0)), 
	Point(Fixed(1), Fixed(1))))
		std::cout << "The point is <<intside>> the triangle" << std::endl;
	else
		std::cout << "The point is >>outside<< the triangle" << std::endl;
	
	return 0;
}

