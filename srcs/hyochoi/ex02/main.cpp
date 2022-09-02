/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyochoi <hyochoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 10:01:33 by hyochoi           #+#    #+#             */
/*   Updated: 2021/01/26 11:34:38 by hyochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap a("newmodel");
	FragTrap b(a);
	FragTrap c;
	ScavTrap d("brand-new");
	ScavTrap e(d);
	ScavTrap f;

	c = b;
	f = e;
	c.vaulthunter_dot_exe("you");
	c.vaulthunter_dot_exe("you");
	c.vaulthunter_dot_exe("you");
	c.vaulthunter_dot_exe("you");
	c.vaulthunter_dot_exe("you");
	f.challengeNewcomer("you");
	f.challengeNewcomer("you");
	f.challengeNewcomer("you");
	f.challengeNewcomer("you");
	f.challengeNewcomer("you");
}
