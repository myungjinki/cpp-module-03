/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyochoi <hyochoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 09:19:31 by hyochoi           #+#    #+#             */
/*   Updated: 2021/01/26 17:21:25 by hyochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 100;
	maxEnergyPoints = 100;
	level = 1;
	meleeAttackDamage = 30;
	rangedAttackDamage = 20;
	headButtAttackDamage = 10;
	thunderboltAttackDamage = 50;
	noiseAttackDamage = 15;
	armorDamageReduction = 5;
	type = "FR4G-TP";
	std::cout << "	+ " << *name << " is FR4G-TP" << std::endl;
}

FragTrap::FragTrap(const std::string _name) : ClapTrap(_name)
{
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 100;
	maxEnergyPoints = 100;
	level = 1;
	meleeAttackDamage = 30;
	rangedAttackDamage = 20;
	headButtAttackDamage = 10;
	thunderboltAttackDamage = 50;
	noiseAttackDamage = 15;
	armorDamageReduction = 5;
	type = "FR4G-TP";
	std::cout << "	+ " << *name << " is FR4G-TP" << std::endl;
}

FragTrap::FragTrap(const FragTrap &input) : ClapTrap(input)
{
	headButtAttackDamage = input.headButtAttackDamage;
	thunderboltAttackDamage = input.thunderboltAttackDamage;
	noiseAttackDamage = input.noiseAttackDamage;
	type = "FR4G-TP";
	std::cout << "	+ " << *name << " is FR4G-TP" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << *name << " is destructed" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &input)
{
	ClapTrap::operator= (input);
	headButtAttackDamage = input.headButtAttackDamage;
	thunderboltAttackDamage = input.thunderboltAttackDamage;
	noiseAttackDamage = input.noiseAttackDamage;
	return (*this);
}

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << type << " " << *name << " attacks " << target <<
		" at range, causing " << rangedAttackDamage << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << type << " " << *name << " meleeattacks " << target <<
		", causing " << meleeAttackDamage << " points of damage!" << std::endl;
}

void FragTrap::headButtAttack(std::string const & target)
{
	std::cout << type << " " << *name << " does headbutt to " << target <<
		", causing " << headButtAttackDamage << " points of damage!" << std::endl;
}

void FragTrap::thunderboltAttack(std::string const & target)
{
	std::cout << type << " " << *name << " uses thunderbolt to " << target <<
		", causing " << thunderboltAttackDamage << " points of damage!" << std::endl;
}

void FragTrap::noiseAttack(std::string const & target)
{
	std::cout << type << " " << *name << " makes noise to " << target <<
		", causing " << noiseAttackDamage << " points of damage!" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	void	(FragTrap::*ptr[5])(std::string const &)
		= { &FragTrap::meleeAttack, &FragTrap::rangedAttack, &FragTrap::headButtAttack,
			&FragTrap::thunderboltAttack, &FragTrap::noiseAttack };

	if (energyPoints < 25)
	{
		std::cout << type << " " << *name << " does not have enough energy..." << std::endl;
		return ;
	}
	(this->*ptr[clock() % 5])(target);
	energyPoints -= 25;
}