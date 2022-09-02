/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyochoi <hyochoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 10:01:33 by hyochoi           #+#    #+#             */
/*   Updated: 2021/01/26 12:41:35 by hyochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

int main(void)
{
	SuperTrap	a("A");
	FragTrap	b("frag");
	ScavTrap	c("scav");

	a.meleeAttack("you");
	a.rangedAttack("you");
	a.ninjaShoebox(b);
	a.ninjaShoebox(c);
	a.vaulthunter_dot_exe("you");
	a.vaulthunter_dot_exe("you");
	return (0);
}
