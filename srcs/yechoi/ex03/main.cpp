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

int     main(void)
{
    FragTrap    Jennie("Jennie");
    ScavTrap    Lisa("Lisa");
    NinjaTrap   Ninja("Ninja");
    ClapTrap    temp;
    
    temp = Ninja;
    Lisa.takeDamage(Ninja.rangedAttack(Lisa._name));
    Jennie.takeDamage(Ninja.meleeAttack(Jennie._name));

    Lisa.beRepaired(30);
    Jennie.beRepaired(1);
    Ninja.beRepaired(10);

    Ninja.ninjaShoebox(Lisa);
    Ninja.ninjaShoebox(Jennie);
    Ninja.ninjaShoebox(temp);
}