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

#include "FragTrap.hpp"

int     main(void)
{
    FragTrap Jim;
    FragTrap Jack("Jack");

    Jim = FragTrap("Jane");

    Jack.takeDamage(Jim.rangedAttack(Jack._name));
    Jim.takeDamage(Jack.meleeAttack(Jim._name));

    Jack.beRepaired(40);
    Jim.beRepaired(5);

    Jim.vaulthunter_dot_exe("CL4P-TP");
    Jim.vaulthunter_dot_exe("CL4P-TP");
    Jim.vaulthunter_dot_exe("CL4P-TP");
    Jim.vaulthunter_dot_exe("CL4P-TP");
    Jim.vaulthunter_dot_exe("CL4P-TP");
}