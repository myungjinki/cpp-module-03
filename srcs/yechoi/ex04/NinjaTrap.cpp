/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 17:01:28 by yechoi            #+#    #+#             */
/*   Updated: 2021/01/22 23:41:31 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
    : ClapTrap() 
{
    _hit = 60;
    _maxHit = 60;
    _energy = 120;
    _maxEnergy = 120;
    _level = 1;
    _meleeDamage = 60;
    _rangedDamage = 5;
    _armorReduction = 0;
    std::cout << _name << ": I am ninja!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name)
    : ClapTrap(name)
{
    _hit = 60;
    _maxHit = 60;
    _energy = 120;
    _maxEnergy = 120;
    _level = 1;
    _meleeDamage = 60;
    _rangedDamage = 5;
    _armorReduction = 0;
    std::cout << _name << ": Hoy!" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap & ref)
{
    *this = ref;
}

NinjaTrap& NinjaTrap::operator=(const NinjaTrap & ref)
{
    _name = ref._name;
    _hit = ref._hit;
    _maxHit = ref._maxHit;
    _energy = ref._energy;
    _maxEnergy = ref._maxEnergy;
    _level = ref._level;
    _meleeDamage = ref._meleeDamage;
    _rangedDamage = ref._rangedDamage;
    _armorReduction = ref._armorReduction;
    std::cout << _name <<
        ": Checkout my dart!"<< std::endl;
    return (*this);
}

NinjaTrap::~NinjaTrap()
{
    std::cout << _name << ": Ninjaaaa... " << std::endl;
}

void   NinjaTrap::ninjaShoebox(const FragTrap & ref)
{
    std::cout << _name << " attacks " << ref._name << " with kimchi!" << std::endl;
}

void   NinjaTrap::ninjaShoebox(const ScavTrap & ref)
{
    std::cout << _name << " attacks " << ref._name << " with ninja star!" << std::endl;
}

void   NinjaTrap::ninjaShoebox(const NinjaTrap & ref)
{
    std::cout << _name << " attacks " << ref._name << " with his shoes!" << std::endl;
}

void   NinjaTrap::ninjaShoebox(const ClapTrap & ref)
{
    std::cout << _name << " attacks " << ref._name << " with rice cake!" << std::endl;
}      