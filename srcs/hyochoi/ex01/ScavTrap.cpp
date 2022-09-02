/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyochoi <hyochoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 09:19:31 by hyochoi           #+#    #+#             */
/*   Updated: 2021/01/26 11:36:48 by hyochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
	: hitPoints(100), maxHitPoints(100), energyPoints(50), maxEnergyPoints(50),
	level(1), meleeAttackDamage(20), rangedAttackDamage(15), armorDamageReduction(3)
{
	std::cout << "SC4V-TP default constructed" << std::endl;
	name = new std::string("default");
}

ScavTrap::ScavTrap(const std::string _name)
	: hitPoints(100), maxHitPoints(100), energyPoints(50), maxEnergyPoints(50),
	level(1), meleeAttackDamage(20), rangedAttackDamage(15), armorDamageReduction(3)
{
	std::cout << "SC4V-TP " << _name << " constructed" << std::endl;
	name = new std::string(_name);
}

ScavTrap &ScavTrap::operator=(const ScavTrap &input)
{
	hitPoints = input.hitPoints;
	maxHitPoints = input.maxHitPoints;
	energyPoints = input.energyPoints;
	maxEnergyPoints = input.maxEnergyPoints;
	level = input.level;
	meleeAttackDamage = input.meleeAttackDamage;
	rangedAttackDamage = input.rangedAttackDamage;
	armorDamageReduction = input.armorDamageReduction;
	if (name)
		delete name;
	name = new std::string(*input.name);
	return (*this);
}

ScavTrap::ScavTrap(const ScavTrap &input)
{
	name = NULL;
	std::cout << "Another SC4V-TP " << *input.name << " constructed" << std::endl;
	*this = input;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP " << *name << " destructed" << std::endl;
	if (name)
		delete name;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	hitPoints += amount;
	if (hitPoints > maxHitPoints)
		hitPoints = maxHitPoints;
	std::cout << "SC4V-TP " << *name << "'s HP repaired to " << hitPoints << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	unsigned int reducedDamage
		= amount > armorDamageReduction ? amount - armorDamageReduction : 0;
	
	std::cout << "SC4V-TP " << *name << " took " << reducedDamage << " damage" << std::endl;
	if (hitPoints >= reducedDamage)
		hitPoints -= reducedDamage;
	else
		beRepaired(maxHitPoints);
}

void ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << *name << " attacks " << target <<
		" at range, causing " << rangedAttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << *name << " meleeattacks " << target <<
		", causing " << meleeAttackDamage << " points of damage!" << std::endl;
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
