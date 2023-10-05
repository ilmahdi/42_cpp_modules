/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:02:35 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/22 15:46:49 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "WrongAnimal.h"
#include "WrongCat.h"


void tests(void)
{
    std::cout << "\nTESTS WITH ANIMAL CLASS:\n";
    std::cout << "-------------------------\n\n";
    const Animal* animal = new Animal(); 
    const Animal* cat = new Cat();
    const Animal* dog = new Dog();
    std::cout << std::endl;
    std::cout << animal->getType() << ": ";
    animal->makeSound();
    std::cout << cat->getType() << ": ";
    cat->makeSound();
    std::cout << dog->getType() << ": ";
    dog->makeSound();
    std::cout << std::endl;

    delete animal;
    delete cat;
    delete dog;
    
    std::cout << "\nTESTS WITH WRONGANIMAL CLASS:\n";
    std::cout << "------------------------------\n\n";
    const WrongAnimal* wronganimal = new WrongAnimal(); 
    const WrongAnimal* wrongcat = new WrongCat();
    std::cout << std::endl;
    std::cout << wronganimal->getType() << ": ";
    wronganimal->makeSound();
    std::cout << wrongcat->getType() << ": ";
    wrongcat->makeSound();
    std::cout << std::endl;

    delete wronganimal;
    delete wrongcat;
}

int main() 
{
    tests();
    // system("leaks polymorphism");
    return 0; 
}