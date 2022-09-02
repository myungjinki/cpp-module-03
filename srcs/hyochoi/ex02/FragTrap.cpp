/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyochoi <hyochoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 09:19:31 by hyochoi           #+#    #+#             */
/*   Updated: 2021/01/26 11:34:01 by hyochoi          ###   ########.fr       */
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
	std::cout << "	+ " << *name << " is FR4G-TP" << std::endl;
}

FragTrap::FragTrap(const FragTrap &input) : ClapTrap(input)
{
	headButtAttackDamage = input.headButtAttackDamage;
	thunderboltAttackDamage = input.thunderboltAttackDamage;
	noiseAttackDamage = input.noiseAttackDamage;
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

void FragTrap::headButtAttack(std::string const & target)
{
	std::cout << *name << " does headbutt to " << target <<
		", causing " << headButtAttackDamage << " points of damage!" << std::endl;
}

void FragTrap::thunderboltAttack(std::string const & target)
{
	std::cout << *name << " uses thunderbolt to " << target <<
		", causing " << thunderboltAttackDamage << " points of damage!" << std::endl;
}

void FragTrap::noiseAttack(std::string const & target)
{
	std::cout << *name << " makes noise to " << target <<
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
	std::cout << "FR4G-TP ";
	(this->*ptr[clock() % 5])(target);
	energyPoints -= 25;
}
