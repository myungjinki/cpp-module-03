/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 21:16:42 by mki               #+#    #+#             */
/*   Updated: 2021/08/02 03:02:20 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	_name = "No name";
	_hitPoint = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap <" << _name << "> Constructor" << std::endl;
	printStatus();
}

ScavTrap::ScavTrap(const std::string name): ClapTrap(name)
{
	_name = name;
	_hitPoint = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap <" << _name << "> Constructor" << std::endl;
	printStatus();
}

ScavTrap::ScavTrap(const ScavTrap &s)
{
	operator=(s);
}

ScavTrap &ScavTrap::operator=(const ScavTrap &s)
{
	_name = s._name;
	_hitPoint = s._hitPoint;
	_energyPoints = s._energyPoints;
	_attackDamage = s._attackDamage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor" << std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
	if (_energyPoints > 0) {
		_energyPoints -= 10;
	}
	std::cout << "<" << _name << "> attacks "
	<< target << ", causing " << _attackDamage
	<< " points of damage!" << std::endl;
	printStatus();
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl;
	printStatus();
}

