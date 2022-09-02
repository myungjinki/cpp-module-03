/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 13:51:56 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/09 13:51:56 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>
#include <iostream>

class FragTrap
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
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap & ref);
        FragTrap& operator=(const FragTrap & ref);
        ~FragTrap();
        unsigned int    rangedAttack(std::string const & target);
        unsigned int    meleeAttack(std::string const & target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);
        void            vaulthunter_dot_exe(std::string const & target);
};

#endif