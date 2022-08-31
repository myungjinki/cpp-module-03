/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 17:12:46 by mki               #+#    #+#             */
/*   Updated: 2021/08/02 12:39:17 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap: public ScavTrap, public FragTrap
{
private:
	std::string	_name;
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& d);
	DiamondTrap &operator=(const DiamondTrap& d);
	~DiamondTrap();
	void	attack(std::string const &target);
	void	whoAmI();
};

#endif
