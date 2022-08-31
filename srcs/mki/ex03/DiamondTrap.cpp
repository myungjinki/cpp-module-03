/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 17:12:43 by mki               #+#    #+#             */
/*   Updated: 2021/08/05 03:07:37 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    _name = "No name";
    ClapTrap::_name = "No name_clap_name";
    _hitPoint = FragTrap::_hitPoint;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    std::cout << "DiamondTrap <" << _name << "> Constructor" << std::endl;
    printStatus();
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
    _name = name;
    ClapTrap::_name = name + "_clap_name";
    _hitPoint = FragTrap::_hitPoint;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    std::cout << "DiamondTrap <" << _name << "> Constructor" << std::endl;
    printStatus();
}

DiamondTrap::DiamondTrap(const DiamondTrap &d)
{
    operator=(d);
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &d)
{
    _name = d._name;
    ClapTrap::_name = d.ClapTrap::_name;
    _hitPoint = d._hitPoint;
    _energyPoints = d._energyPoints;
    _attackDamage = d._attackDamage;
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor" << std::endl;
}

void DiamondTrap::attack(std::string const &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "name: " << _name << std::endl;
    std::cout << "clapTrap name: " << ClapTrap::_name << std::endl
              << std::endl;
}
