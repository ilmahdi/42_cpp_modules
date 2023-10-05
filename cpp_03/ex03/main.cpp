/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 17:13:17 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/21 15:41:54 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"
#include "DiamondTrap.h"

int main(void) 
{
	DiamondTrap thor("thor");
	DiamondTrap odin(thor);
	DiamondTrap zoll;
	std::cout << std::endl;


	zoll.setName("zoll");
	zoll.ClapTrap::setName("zoll_clap_name");
	odin.setName("odin");
	odin.ClapTrap::setName("odin_clap_name");

	std::cout << odin.getName() << " HitPoint: " << odin.getHitPoint() <<"\n";
	std::cout << odin.getName() << " Energy: " << odin.getEnergy() <<"\n";
	std::cout << odin.getName() << " AttDamage: " << odin.getAttDamage() <<"\n\n";

	zoll.highFivesGuys();
	zoll.guardGate();
	zoll.whoAmI();
	zoll.setEnergy(0);
	zoll.attack(thor.ClapTrap::getName());
	zoll.beRepaired(2);
	std::cout << std::endl;

	odin.attack(thor.ClapTrap::getName());
	thor.takeDamage(odin.getAttDamage());

	odin.setAttDamage(40);
	odin.attack(thor.ClapTrap::getName());
	thor.takeDamage(odin.getAttDamage());
	odin.attack(thor.ClapTrap::getName());
	thor.takeDamage(odin.getAttDamage());
	odin.attack(thor.ClapTrap::getName());
	thor.takeDamage(odin.getAttDamage());
	
	thor.beRepaired(2);
	std::cout << std::endl;

	return 0;
}