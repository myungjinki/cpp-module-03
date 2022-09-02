/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:35:26 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/13 15:18:40 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    _name = "user";
    std::cout << _name << ": Clap clap claptrap!" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    _name = name;
    std::cout << _name << ": Clap claptrap!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & ref)
{
    *this = ref;
}

ClapTrap& ClapTrap::operator=(const ClapTrap & ref)
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
    std::cout << _name << ": Look out everybody! Things are about to get awesome!" << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << _name << ": clap... trap..." << std::endl;
}

unsigned int    ClapTrap::rangedAttack(std::string const & target)
{
    std::cout << _name << " attacks " << target
        << " at range, causing " << _rangedDamage
        << " points of damage!" << std::endl;
    return (_rangedDamage);
}


unsigned int    ClapTrap::meleeAttack(std::string const & target)
{
    std::cout << _name << " attacks " << target
        << " at melee, causing " << _meleeDamage
        << " points of damage!" << std::endl;
    return (_meleeDamage);
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    int damage = amount - _armorReduction;

    if (damage < 0)
        damage = 0;
    _hit -= damage;
    if (_hit < 0)
        _hit = 0;

    std::cout << _name << " takes " << damage
        << " point(s) of damage!" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    _hit += amount;
    _energy += amount;

    if (_hit > _maxHit)
        _hit = _maxHit;
    if (_energy > _maxEnergy)
        _energy = _maxEnergy;

    std::cout << _name << " restores " << amount
        << " point(s)!" << std::endl;
}

unsigned int    ClapTrap::getInfo(const std::string str)
{
    if (str == "_hit")
        return (_hit);
    else if (str == "_maxHit")
        return (_maxHit);
    else if (str == "_energy")
        return (_energy);
    else if (str == "_maxEnergy")
        return (_maxEnergy);
    else if (str == "_level")
        return (_level);
    else if (str == "_meleeDamage")
        return (_meleeDamage);
    else if (str == "_rangedDamage")
        return (_rangedDamage);
    else if (str == "_armorReduction")
        return (_armorReduction);
    return (0);
}