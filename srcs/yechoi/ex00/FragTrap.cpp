/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 13:51:52 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/09 13:51:52 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    _name = "user";
    _hit = 100;
    _maxHit = 100;
    _energy = 100;
    _maxEnergy = 100;
    _level = 1;
    _meleeDamage = 30;
    _rangedDamage = 20;
    _armorReduction = 5;
    std::cout << _name << ": Let's get this party started!" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    _name = name;
    _hit = 100;
    _maxHit = 100;
    _energy = 100;
    _maxEnergy = 100;
    _level = 1;
    _meleeDamage = 30;
    _rangedDamage = 20;
    _armorReduction = 5;
    std::cout << _name << ": This time it'll be awesome, I promise!" << std::endl;
}

FragTrap::FragTrap(const FragTrap & ref)
{
    *this = ref;
}

FragTrap& FragTrap::operator=(const FragTrap & ref)
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

FragTrap::~FragTrap()
{
    std::cout << _name << ": Uhhhh...." << std::endl;
}

unsigned int    FragTrap::rangedAttack(std::string const & target)
{
    std::cout << _name << " attacks " << target
        << " at range, causing " << _rangedDamage
        << " points of damage!" << std::endl;
    return (_rangedDamage);
}


unsigned int    FragTrap::meleeAttack(std::string const & target)
{
    std::cout << _name << " attacks " << target
        << " at melee, causing " << _meleeDamage
        << " points of damage!" << std::endl;
    return (_meleeDamage);
}

void    FragTrap::takeDamage(unsigned int amount)
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

void    FragTrap::beRepaired(unsigned int amount)
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

void    FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    if (_energy < 25)
    {
        std::cout << _name << " is out of energy!" << std::endl;
        return ;
    }
    _energy -= 25;

    std::string attack[5] = {"knife", "gun", "fork", "spell", "tank"};
    int damage[5] = {10, 20, 30, 40, 50};
    std::cout << _name << " attacks " << target
        << " with " << attack[rand() % 5] << " causing "
        << damage[rand() % 5] << " points of damage!" << std::endl;
}