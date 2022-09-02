/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 23:09:49 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/09 23:09:49 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
    : ClapTrap() 
{
    _hit = 100;
    _maxHit = 100;
    _energy = 50;
    _maxEnergy = 50;
    _level = 1;
    _meleeDamage = 20;
    _rangedDamage = 15;
    _armorReduction = 3;
    std::cout << _name << ": Recompiling my combat code!" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
    : ClapTrap(name)
{
    _hit = 100;
    _maxHit = 100;
    _energy = 50;
    _maxEnergy = 50;
    _level = 1;
    _meleeDamage = 20;
    _rangedDamage = 15;
    _armorReduction = 3;
    std::cout << _name << ": Hey everybody! Check out my package!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & ref)
{
    *this = ref;
}

ScavTrap& ScavTrap::operator=(const ScavTrap & ref)
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
        ": Glitching weirdness is a term of endearment, right?"<< std::endl;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << _name << ": Oh...My gosh... " << std::endl;
}

void            ScavTrap::challengeNewcomer(void)
{
    std::string challenges[5] =
    {
        "Go out and eat kimchi.",
        "Make kimchi bokkeumbap as best as you can.",
        "Buy some cabbages and make kimchi.",
        "Name any kimchi that does not exist in the world.",
        "Get your family's kimchi recipe."
    };

    std::cout << _name << ": This is a challenge I give to you! ";
    std::cout << challenges[rand() % 5] << std::endl;
}