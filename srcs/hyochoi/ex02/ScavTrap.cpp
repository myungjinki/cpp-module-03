/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyochoi <hyochoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 09:19:31 by hyochoi           #+#    #+#             */
/*   Updated: 2021/01/26 11:26:03 by hyochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 50;
	maxEnergyPoints = 50;
	level = 1;
	meleeAttackDamage = 20;
	rangedAttackDamage = 15;
	armorDamageReduction = 3;
	std::cout << "	+ " << *name << " is SC4V-TP" << std::endl;
}

ScavTrap::ScavTrap(const std::string _name) : ClapTrap(_name)
{
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 50;
	maxEnergyPoints = 50;
	level = 1;
	meleeAttackDamage = 20;
	rangedAttackDamage = 15;
	armorDamageReduction = 3;
	std::cout << "	+ " << *name << " is SC4V-TP" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &input) : ClapTrap(input)
{
	std::cout << "	+ " << *name << " is SC4V-TP" << std::endl;
} 

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP " << *name << " is destructed" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &input)
{
	ClapTrap::operator= (input);
	return (*this);
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string	challenges[5] = {
		"fast drinking a gallon of oil", "elegant diving into garbage can",
		"precise shooting bullets to road sign", "creative upcycling an 18c radio",
		"digging a dip hole at ground" };

	if (energyPoints < 25)
	{
		std::cout << "SC4V-TP " << *name << " does not have enough energy..." << std::endl;
		return ;
	}
	std::cout << "SC4V-TP " << *name << " starts challenge against " << target << ": " << challenges[clock() % 5] << std::endl;
	energyPoints -= 25;
}
