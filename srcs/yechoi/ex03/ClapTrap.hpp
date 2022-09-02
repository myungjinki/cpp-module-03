/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:35:30 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/12 15:07:29 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
    protected:
        unsigned int    _hit;
        unsigned int    _maxHit;
        unsigned int    _energy;
        unsigned int    _maxEnergy;
        unsigned int    _level;
        unsigned int    _meleeDamage;
        unsigned int    _rangedDamage;
        unsigned int    _armorReduction;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap & ref);
        ClapTrap& operator=(const ClapTrap & ref);
        virtual ~ClapTrap();

        std::string     _name;
        unsigned int    rangedAttack(std::string const & target);
        unsigned int    meleeAttack(std::string const & target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);
};

#endif