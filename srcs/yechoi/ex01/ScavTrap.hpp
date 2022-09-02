/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 23:09:53 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/09 23:09:53 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>

class ScavTrap
{
    private:
        unsigned int    _hit;
        unsigned int    _maxHit;
        unsigned int    _energy;
        unsigned int    _maxEnergy;
        unsigned int    _level;
        unsigned int    _meleeDamage;
        unsigned int    _rangedDamage;
        unsigned int    _armorReduction;

    public:
        std::string _name;
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap & ref);
        ScavTrap& operator=(const ScavTrap & ref);
        ~ScavTrap();
        unsigned int    rangedAttack(std::string const & target);
        unsigned int    meleeAttack(std::string const & target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);
        void            challengeNewcomer(void);
};

#endif