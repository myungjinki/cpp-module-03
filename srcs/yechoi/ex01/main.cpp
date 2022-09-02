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

int     main(void)
{
    FragTrap Jennie("Jennie");
    ScavTrap Lisa("Lisa");

    Lisa.takeDamage(Jennie.rangedAttack(Lisa._name));
    Jennie.takeDamage(Lisa.meleeAttack(Jennie._name));

    Lisa.beRepaired(30);
    Jennie.beRepaired(1);

    Lisa.challengeNewcomer();
}