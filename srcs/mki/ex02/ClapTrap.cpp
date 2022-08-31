/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 17:11:22 by mki               #+#    #+#             */
/*   Updated: 2021/08/02 02:31:50 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	_name = "No name";
	_hitPoint = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap <" << _name << "> Constructor" << std::endl;
	printStatus();
}

ClapTrap::ClapTrap(const std::string name)
{
	_name = name;
	_hitPoint = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap <" << _name << "> Constructor" << std::endl;
	printStatus();
}

ClapTrap::ClapTrap(const ClapTrap &c)
{
	operator=(c);
}

ClapTrap &ClapTrap::operator=(const ClapTrap &c)
{
	_name = c._name;
	_hitPoint = c._hitPoint;
	_energyPoints = c._energyPoints;
	_attackDamage = c._attackDamage;
	printStatus();
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor" << std::endl;
}

void	ClapTrap::attack(std::string const &target)
{
	std::cout << "<" << _name << "> attacks "
	<< target << ", causing " << _attackDamage
	<< " points of damage!" << std::endl;
	printStatus();
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoint > 0) {
		_hitPoint -= amount;
	}
	std::cout << "<" << _name << "> took " << amount << " damage" << std::endl;
	printStatus();
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	_hitPoint += amount;
	std::cout << "<" << _name << "> repaired " << amount << " Hitpoints" << std::endl;
	printStatus();
}

void	ClapTrap::printStatus()
{
	std::cout << "Hitpoints: " << _hitPoint << std::endl;
	std::cout << "Energy points: " << _energyPoints << std::endl;
	std::cout << "Attack damage: " << _attackDamage << std::endl << std::endl;
}
