/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyochoi <hyochoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 09:02:46 by hyochoi           #+#    #+#             */
/*   Updated: 2021/01/26 11:37:53 by hyochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include <iostream>

class FragTrap
{
	private:
		unsigned int hitPoints;
		unsigned int maxHitPoints;
		unsigned int energyPoints;
		unsigned int maxEnergyPoints;
		unsigned int level;
		unsigned int meleeAttackDamage;
		unsigned int rangedAttackDamage;
		unsigned int headButtAttackDamage;
		unsigned int thunderboltAttackDamage;
		unsigned int noiseAttackDamage;
		unsigned int armorDamageReduction;
		std::string		*name;

		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void headButtAttack(std::string const & target);
		void thunderboltAttack(std::string const & target);
		void noiseAttack(std::string const & target);
	public:
		FragTrap();
		FragTrap(const std::string _name);
		FragTrap(const FragTrap &input);
		~FragTrap();

		FragTrap &operator=(const FragTrap &input);
		void vaulthunter_dot_exe(std::string const & target);
};

#endif
