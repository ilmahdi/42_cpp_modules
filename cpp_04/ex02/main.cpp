/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:02:35 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/22 16:26:29 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.h"
#include "Brain.h"
#include "Cat.h"
#include "Dog.h"


void tests(void)
{
	const AAnimal	*aanimals[6];
	
	for (size_t i = 0; i < 3; i++)
		aanimals[i] = new Cat();
	
	for (size_t i = 3; i < 6; i++)
		aanimals[i] = new Dog();
	std::cout << std::endl;
	for (size_t i = 0; i < 6; i++)
		aanimals[i]->makeSound();
		
	std::cout << std::endl;
	for (size_t i = 0; i < 6; i++)
		delete aanimals[i];
	std::cout << std::endl;
	Cat lucy;
	Dog boby;
	{
		std::string *dogIdeas = lucy.getBrain()->getIdeas();
		std::cout << dogIdeas[0] << std::endl;
		
		std::string *catIdeas = boby.getBrain()->getIdeas();
		std::cout << catIdeas[99] << std::endl;
	}
	{
		Cat puly(lucy);
		Dog roby(boby);
		std::string *dogIdeas = puly.getBrain()->getIdeas();
		std::cout << dogIdeas[0] << std::endl;
		
		std::string *catIdeas = roby.getBrain()->getIdeas();
		std::cout << catIdeas[99] << std::endl;
	}
	std::cout << std::endl << "AAnimal *ptr :";
	AAnimal *ptr;
	ptr = &lucy;
	std::cout << std::endl << "ptr->makeSound to &Cat: ";
	ptr->makeSound();
	ptr = &boby;
	std::cout << "ptr->makeSound to &Dog: ";
	ptr->makeSound();
	std::cout << std::endl;
	std::cout << "use a reference type AAnimal type Cat: " << std::endl;
	AAnimal &ref = lucy;
	ref.makeSound();
	std::cout << std::endl;
}

int main() 
{
	tests();
	// system("leaks abstract");
	return(0);
}