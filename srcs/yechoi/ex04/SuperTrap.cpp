/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 15:17:58 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/14 15:36:03 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
    _name = "user";
    _hit = FragTrap::getInfo("_hit");
    _maxHit = FragTrap::getInfo("_maxHit");
    _energy = NinjaTrap::getInfo("_energy");
    _maxEnergy = NinjaTrap::getInfo("_maxEnergy");
    _level = 1;
    _meleeDamage = NinjaTrap::getInfo("_meleeDamage");
    _rangedDamage = FragTrap::getInfo("_rangedDamage");
    _armorReduction = FragTrap::getInfo("_armorReduction");
    std::cout << _name << ": Superman born!" << std::endl;
}

SuperTrap::SuperTrap(std::string name)
    : ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
    _name = name;
    _hit = FragTrap::getInfo("_hit");
    _maxHit = FragTrap::getInfo("_maxHit");
    _energy = NinjaTrap::getInfo("_energy");
    _maxEnergy = NinjaTrap::getInfo("_maxEnergy");
    _level = 1;
    _meleeDamage = NinjaTrap::getInfo("_meleeDamage");
    _rangedDamage = FragTrap::getInfo("_rangedDamage");
    _armorReduction = FragTrap::getInfo("_armorReduction");
    std::cout << _name << ": Super~ Man! " << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap & ref)
{
    *this = ref;
}

SuperTrap& SuperTrap::operator=(const SuperTrap & ref)
{
    _name = ref.FragTrap::_name;
    _hit = FragTrap::getInfo("_hit");
    _maxHit = FragTrap::getInfo("_maxHit");
    _energy = NinjaTrap::getInfo("_energy");
    _maxEnergy = NinjaTrap::getInfo("_maxEnergy");
    _level = 1;
    _meleeDamage = NinjaTrap::getInfo("_meleeDamage");
    _rangedDamage = FragTrap::getInfo("_rangedDamage");
    _armorReduction = FragTrap::getInfo("_armorReduction");
    std::cout << _name << ": Superman =.= " << std::endl;
    return (*this);    
}

SuperTrap::~SuperTrap()
{
    std::cout << _name << ": Going back to earth..." <<std::endl;
}

unsigned int    SuperTrap::rangedAttack(std::string const & target)
{
    FragTrap::rangedAttack(target);
    return (FragTrap::_rangedDamage);
}

unsigned int    SuperTrap::meleeAttack(std::string const & target)
{
    NinjaTrap::meleeAttack(target);
    return (NinjaTrap::_meleeDamage);
}