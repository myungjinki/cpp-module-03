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
    :_hit(100), _maxHit(100), _energy(50), _maxEnergy(50), _level(1),
    _meleeDamage(20), _rangedDamage(15), _armorReduction(3), _name("user")
{
    std::cout << _name << ": Recompiling my combat code!" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
    :_hit(100), _maxHit(100), _energy(50), _maxEnergy(50), _level(1),
    _meleeDamage(20), _rangedDamage(15), _armorReduction(3), _name(name)
{
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

unsigned int    ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << _name << " is now attacking " << target
        << "at range, making him/her to lose " << _rangedDamage
        << " points of damage!" << std::endl;
    return (_rangedDamage);
}

unsigned int    ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << _name << " is now attacking " << target
        << " at melee, making him/her to lose " << _meleeDamage
        << " points of damage!" << std::endl;
    return (_meleeDamage);
}

void            ScavTrap::takeDamage(unsigned int amount)
{
    int damage = amount - _armorReduction;

    if (damage < 0)
        damage = 0;
    _hit -= damage;
    if (_hit < 0)
        _hit = 0;

    std::cout << _name << " loses " << damage
        << " point(s) of damage!" << std::endl;
}

void            ScavTrap::beRepaired(unsigned int amount)
{
    _hit += amount;
    _energy += amount;

    if (_hit > _maxHit)
        _hit = _maxHit;
    if (_energy > _maxEnergy)
        _energy = _maxEnergy;

    std::cout << _name << " gets " << amount
        << " point(s)!" << std::endl;
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