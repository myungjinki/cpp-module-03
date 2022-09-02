/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyochoi <hyochoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 09:19:31 by hyochoi           #+#    #+#             */
/*   Updated: 2021/01/26 10:38:11 by hyochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
	: hitPoints(100), maxHitPoints(100), energyPoints(100), maxEnergyPoints(100),
	level(1), meleeAttackDamage(30), rangedAttackDamage(20), headButtAttackDamage(10),
	thunderboltAttackDamage(50), noiseAttackDamage(15), armorDamageReduction(5)
{
	std::cout << "FR4G-TP default constructed" << std::endl;
	name = new std::string("default");
}

FragTrap::FragTrap(const std::string _name)
	: hitPoints(100), maxHitPoints(100), energyPoints(100), maxEnergyPoints(100),
	level(1), meleeAttackDamage(30), rangedAttackDamage(20), headButtAttackDamage(10),
	thunderboltAttackDamage(50), noiseAttackDamage(15), armorDamageReduction(5)
{
	std::cout << "FR4G-TP " << _name << " constructed" << std::endl;
	name = new std::string(_name);
}

FragTrap &FragTrap::operator=(const FragTrap &input)
{
	hitPoints = input.hitPoints;
	maxHitPoints = input.maxHitPoints;
	energyPoints = input.energyPoints;
	maxEnergyPoints = input.maxEnergyPoints;
	level = input.level;
	meleeAttackDamage = input.meleeAttackDamage;
	rangedAttackDamage = input.rangedAttackDamage;
	headButtAttackDamage = input.headButtAttackDamage;
	thunderboltAttackDamage = input.thunderboltAttackDamage;
	noiseAttackDamage = input.noiseAttackDamage;
	armorDamageReduction = input.armorDamageReduction;
	if (name)
		delete name;
	name = new std::string(*input.name);
	return (*this);
}

FragTrap::FragTrap(const FragTrap &input)
{
	name = NULL;
	std::cout << "Another FR4G-TP " << *input.name << " constructed" << std::endl;
	*this = input;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << *name << " destructed" << std::endl;
	if (name)
		delete name;
}

void FragTrap::beRepaired(unsigned int amount)
{
	hitPoints += amount;
	if (hitPoints > maxHitPoints)
		hitPoints = maxHitPoints;
	std::cout << "FR4G-TP " << *name << "'s HP repaired to " << hitPoints << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	unsigned int reducedDamage
		= amount > armorDamageReduction ? amount - armorDamageReduction : 0;
	
	std::cout << "FR4G-TP " << *name << " took " << reducedDamage << " damage" << std::endl;
	if (hitPoints >= reducedDamage)
		hitPoints -= reducedDamage;
	else
		beRepaired(maxHitPoints);
}

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << *name << " attacks " << target <<
		" at range, causing " << rangedAttackDamage << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << *name << " meleeattacks " << target <<
		", causing " << meleeAttackDamage << " points of damage!" << std::endl;
}

void FragTrap::headButtAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << *name << " does headbutt to " << target <<
		", causing " << headButtAttackDamage << " points of damage!" << std::endl;
}

void FragTrap::thunderboltAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << *name << " uses thunderbolt to " << target <<
		", causing " << thunderboltAttackDamage << " points of damage!" << std::endl;
}

void FragTrap::noiseAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << *name << " makes noise to " << target <<
		", causing " << noiseAttackDamage << " points of damage!" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	void	(FragTrap::*ptr[5])(std::string const &)
		= { &FragTrap::meleeAttack, &FragTrap::rangedAttack, &FragTrap::headButtAttack,
			&FragTrap::thunderboltAttack, &FragTrap::noiseAttack };

	if (energyPoints < 25)
	{
		std::cout << "FR4G-TP " << *name << " does not have enough energy..." << std::endl;
		return ;
	}
	(this->*ptr[clock() % 5])(target);
	energyPoints -= 25;
}
