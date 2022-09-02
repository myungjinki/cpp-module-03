/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyochoi <hyochoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 10:01:33 by hyochoi           #+#    #+#             */
/*   Updated: 2021/01/26 11:56:12 by hyochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

int main(void)
{
	FragTrap a("newmodel");
	ScavTrap b("brand-new");
	NinjaTrap c("old");

	a.vaulthunter_dot_exe("you");
	b.challengeNewcomer("you");
	c.ninjaShoebox(a);
	c.ninjaShoebox(b);
	c.ninjaShoebox(c);
}
