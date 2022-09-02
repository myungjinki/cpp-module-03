/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 13:51:59 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/09 13:51:59 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int     main(void)
{
    FragTrap    Jennie("Jennie");
    ScavTrap    Lisa("Lisa");
    NinjaTrap   Ninja("Ninja");
    SuperTrap   *Superman = new SuperTrap("Superman");

    Lisa.takeDamage(Superman->rangedAttack(Lisa._name));
    Jennie.takeDamage(Superman->meleeAttack(Jennie._name));
    Superman->takeDamage(Lisa.rangedAttack(Superman->_name));

    Lisa.beRepaired(30);
    Jennie.beRepaired(1);
    Superman->beRepaired(10);

    Ninja.ninjaShoebox(Lisa);
    Ninja.ninjaShoebox(Jennie);

    delete Superman;
}