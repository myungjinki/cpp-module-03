/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyochoi <hyochoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 09:19:31 by hyochoi           #+#    #+#             */
/*   Updated: 2021/01/26 17:18:48 by hyochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap()
{
	hitPoints = 60;
	maxHitPoints = 60;
	energyPoints = 120;
	maxEnergyPoints = 120;
	level = 1;
	meleeAttackDamage = 60;
	rangedAttackDamage = 5;
	armorDamageReduction = 0;
	type = "N1NJ-TP";
	std::cout << "	+ " << *name << " is N1NJ-TP" << std::endl;
}

NinjaTrap::NinjaTrap(const std::string _name) : ClapTrap(_name)
{
	hitPoints = 60;
	maxHitPoints = 60;
	energyPoints = 120;
	maxEnergyPoints = 120;
	level = 1;
	meleeAttackDamage = 60;
	rangedAttackDamage = 5;
	armorDamageReduction = 0;
	type = "N1NJ-TP";
	std::cout << "	+ " << *name << " is N1NJ-TP" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &input) : ClapTrap(input)
{
	std::cout << "	+ " << *name << " is N1NJ-TP" << std::endl;
	type = input.type;
} 

NinjaTrap::~NinjaTrap()
{
	std::cout << "N1NJ-TP " << *name << " is destructed" << std::endl;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &input)
{
	ClapTrap::operator= (input);
	return (*this);
}

void NinjaTrap::rangedAttack(std::string const & target)
{
	std::cout << type << " " << *name << " attacks " << target <<
		" at range, causing " << rangedAttackDamage << " points of damage!" << std::endl;
}

void NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout << type << " " << *name << " meleeattacks " << target <<
		", causing " << meleeAttackDamage << " points of damage!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(const FragTrap &input)
{
	std::cout << type << " " << *name << " sends 'Shuriken' signal to FR4G-TP " << input.getName() << std::endl;
}

void	NinjaTrap::ninjaShoebox(const ScavTrap &input)
{
	std::cout << type << " " << *name << " sends 'Shuriken' signal to SC4V-TP " << input.getName() << std::endl;
}

void	NinjaTrap::ninjaShoebox(const NinjaTrap &input)
{
	std::cout << type << " " << *name << " sends 'Shuriken' signal to N1NJ-TP " << input.getName() << std::endl;
}
