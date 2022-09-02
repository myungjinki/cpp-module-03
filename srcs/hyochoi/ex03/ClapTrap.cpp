/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyochoi <hyochoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 09:19:31 by hyochoi           #+#    #+#             */
/*   Updated: 2021/01/26 11:54:30 by hyochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "CL4P-TP default constructed" << std::endl;
	name = new std::string("default");
}

ClapTrap::ClapTrap(const std::string _name)
{
	std::cout << "CL4P-TP " << _name << " constructed" << std::endl;
	name = new std::string(_name);
}

ClapTrap &ClapTrap::operator=(const ClapTrap &input)
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

ClapTrap::ClapTrap(const ClapTrap &input)
{
	name = NULL;
	std::cout << "Another CL4P-TP " << *input.name << " constructed" << std::endl;
	*this = input;
}

ClapTrap::~ClapTrap()
{
	std::cout << "	+ CL4P-TP " << *name << " is destructed" << std::endl;
	if (name)
		delete name;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	hitPoints += amount;
	if (hitPoints > maxHitPoints)
		hitPoints = maxHitPoints;
	std::cout << *name << "'s HP repaired to " << hitPoints << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int reducedDamage
		= amount > armorDamageReduction ? amount - armorDamageReduction : 0;
	
	std::cout << *name << " took " << reducedDamage << " damage" << std::endl;
	if (hitPoints >= reducedDamage)
		hitPoints -= reducedDamage;
	else
		beRepaired(maxHitPoints);
}

void ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << *name << " attacks " << target <<
		" at range, causing " << rangedAttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << *name << " meleeattacks " << target <<
		", causing " << meleeAttackDamage << " points of damage!" << std::endl;
}

std::string &ClapTrap::getName() const
{
	return (*name);
}
