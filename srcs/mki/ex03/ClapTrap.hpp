/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 17:11:19 by mki               #+#    #+#             */
/*   Updated: 2021/08/02 02:20:20 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
protected:
	std::string		_name;
	unsigned int	_hitPoint;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;
public:
	ClapTrap();
	ClapTrap(const std::string name);
	ClapTrap(const ClapTrap &c);
	ClapTrap &operator=(const ClapTrap &c);
	~ClapTrap();
	void	attack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	printStatus();
};

#endif
