/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyochoi <hyochoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 09:02:46 by hyochoi           #+#    #+#             */
/*   Updated: 2021/01/26 17:13:21 by hyochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{
	protected:
		unsigned int hitPoints;
		unsigned int maxHitPoints;
		unsigned int energyPoints;
		unsigned int maxEnergyPoints;
		unsigned int level;
		unsigned int meleeAttackDamage;
		unsigned int rangedAttackDamage;
		unsigned int armorDamageReduction;
		std::string		*name;
		std::string		type;

		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
	public:
		ClapTrap();
		ClapTrap(const std::string _name);
		ClapTrap(const ClapTrap &input);
		virtual ~ClapTrap();

		ClapTrap &operator=(const ClapTrap &input);
		std::string &getName() const;
};

#endif
