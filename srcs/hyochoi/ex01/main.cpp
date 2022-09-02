/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyochoi <hyochoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 10:01:33 by hyochoi           #+#    #+#             */
/*   Updated: 2021/01/26 10:36:43 by hyochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap a("newmodel");
	FragTrap b(a);
	FragTrap c;
	ScavTrap d("brand-newmodel");
	ScavTrap e(d);
	ScavTrap f;

	c = b;
	f = e;
	a.vaulthunter_dot_exe("you");
	a.vaulthunter_dot_exe("you");
	a.vaulthunter_dot_exe("you");
	a.vaulthunter_dot_exe("you");
	a.vaulthunter_dot_exe("you");
	d.challengeNewcomer("you");
	d.challengeNewcomer("you");
	d.challengeNewcomer("you");
	d.challengeNewcomer("you");
	d.challengeNewcomer("you");
}
