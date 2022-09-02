/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyochoi <hyochoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 09:19:31 by hyochoi           #+#    #+#             */
/*   Updated: 2021/01/26 17:20:14 by hyochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(const std::string _name) : ClapTrap(_name), FragTrap(_name), NinjaTrap(_name)
{
	hitPoints = FragTrap::hitPoints;
	maxHitPoints = FragTrap::maxHitPoints;
	energyPoints = NinjaTrap::energyPoints;
	maxEnergyPoints = NinjaTrap::maxEnergyPoints;
	level = 1;
	meleeAttackDamage = NinjaTrap::meleeAttackDamage;
	rangedAttackDamage = FragTrap::rangedAttackDamage;
	armorDamageReduction = FragTrap::armorDamageReduction;
	type = "SUP3-TP";
	std::cout << "	+ " << *name << " is SUP3-TP" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &input) : ClapTrap(input)
{
	std::cout << "	+ " << *name << " is SUP3-TP" << std::endl;
	type = "SUP3-TP";
} 

SuperTrap::~SuperTrap()
{
	std::cout << "SUP3-TP " << *name << " is destructed" << std::endl;
}

SuperTrap &SuperTrap::operator=(const SuperTrap &input)
{
	ClapTrap::operator= (input);
	return (*this);
}

void SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}
