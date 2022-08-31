/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 17:12:17 by mki               #+#    #+#             */
/*   Updated: 2021/08/02 12:39:09 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap: virtual public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap &s);
	ScavTrap &operator=(const ScavTrap &s);
	~ScavTrap();
	void	attack(std::string const &target);
	void	guardGate();
};

#endif
