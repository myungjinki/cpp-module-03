/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyochoi <hyochoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 09:02:46 by hyochoi           #+#    #+#             */
/*   Updated: 2021/01/26 11:32:05 by hyochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		unsigned int headButtAttackDamage;
		unsigned int thunderboltAttackDamage;
		unsigned int noiseAttackDamage;

		void headButtAttack(std::string const & target);
		void thunderboltAttack(std::string const & target);
		void noiseAttack(std::string const & target);
	public:
		FragTrap();
		FragTrap(const std::string _name);
		FragTrap(const FragTrap &input);
		virtual ~FragTrap();

		virtual FragTrap &operator=(const FragTrap &input);
		void vaulthunter_dot_exe(std::string const & target);
};

#endif
