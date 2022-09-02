/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyochoi <hyochoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 09:02:46 by hyochoi           #+#    #+#             */
/*   Updated: 2021/01/26 11:37:04 by hyochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include <iostream>

class ScavTrap
{
	private:
		unsigned int hitPoints;
		unsigned int maxHitPoints;
		unsigned int energyPoints;
		unsigned int maxEnergyPoints;
		unsigned int level;
		unsigned int meleeAttackDamage;
		unsigned int rangedAttackDamage;
		unsigned int armorDamageReduction;
		std::string		*name;

		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
	public:
		ScavTrap();
		ScavTrap(const std::string _name);
		ScavTrap(const ScavTrap &input);
		~ScavTrap();

		ScavTrap &operator=(const ScavTrap &input);
		void challengeNewcomer(std::string const & target);
};

#endif
