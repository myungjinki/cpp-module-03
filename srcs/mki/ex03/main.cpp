/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 22:13:39 by mki               #+#    #+#             */
/*   Updated: 2021/07/10 00:42:02 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap diamondTrap("mki");
	
	diamondTrap.attack("polabear");
	diamondTrap.guardGate();
	diamondTrap.highFivesGuys();
	diamondTrap.whoAmI();
}
