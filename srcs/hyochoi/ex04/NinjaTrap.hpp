/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyochoi <hyochoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 09:02:46 by hyochoi           #+#    #+#             */
/*   Updated: 2021/01/26 12:25:23 by hyochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{
	protected:
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
	public:
		NinjaTrap();
		NinjaTrap(const std::string _name);
		NinjaTrap(const NinjaTrap &input);
		virtual ~NinjaTrap();

		virtual NinjaTrap &operator=(const NinjaTrap &input);
		void	ninjaShoebox(const FragTrap &input);
		void	ninjaShoebox(const ScavTrap &input);
		void	ninjaShoebox(const NinjaTrap &input);
};

#endif
