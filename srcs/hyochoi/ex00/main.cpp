/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyochoi <hyochoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 10:01:33 by hyochoi           #+#    #+#             */
/*   Updated: 2021/01/26 10:07:02 by hyochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap a("newmodel");
	FragTrap b(a);
	FragTrap c;

	c = b;
	a.vaulthunter_dot_exe("you");
	a.vaulthunter_dot_exe("you");
	a.vaulthunter_dot_exe("you");
	a.vaulthunter_dot_exe("you");
	a.vaulthunter_dot_exe("you");
}
