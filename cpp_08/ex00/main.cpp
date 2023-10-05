/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 11:29:00 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/27 15:55:19 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.h"
#include <vector>
#include <deque>
#include <list>

int main(void)
{
	int arr[] = { 10, 20, 30, 40, 50, 60, 70 };
	
	std::vector<int>	cv(arr, arr + 7);
	std::deque<int>		cd(arr, arr + 7);
	std::list<int>		cl(arr, arr + 7);

	try {
		std::cout << *easyfind(cv, 10) << std::endl;
		std::cout << *easyfind(cv, 8) << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() <<std::endl;
	}

	try {
		std::cout << *easyfind(cd, 20) << std::endl;
		std::cout << *easyfind(cd, 8) << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() <<std::endl;
	}

	try {
		std::cout << *easyfind(cl, 70) << std::endl;
	std::cout << *easyfind(cl, 8) << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() <<std::endl;
	}
	return (0);
}