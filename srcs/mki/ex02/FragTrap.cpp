/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 22:09:59 by mki               #+#    #+#             */
/*   Updated: 2021/08/02 03:23:58 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	_name = "No name";
	_hitPoint = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap <" << _name << "> Constructor" << std::endl;
	printStatus();
}

FragTrap::FragTrap(const std::string name): ClapTrap(name)
{
	_name = name;
	_hitPoint = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap <" << _name << "> Constructor" << std::endl;
	printStatus();
}

FragTrap::FragTrap(const FragTrap &s)
{
	operator=(s);
}

FragTrap &FragTrap::operator=(const FragTrap &s)
{
	_name = s._name;
	_hitPoint = s._hitPoint;
	_energyPoints = s._energyPoints;
	_attackDamage = s._attackDamage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "a positive high fives request" << std::endl;
}
