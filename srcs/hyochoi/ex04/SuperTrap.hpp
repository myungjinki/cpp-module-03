/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyochoi <hyochoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 09:02:46 by hyochoi           #+#    #+#             */
/*   Updated: 2021/01/26 12:26:23 by hyochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	private:
		SuperTrap();
	public:
		SuperTrap(const std::string _name);
		SuperTrap(const SuperTrap &input);
		virtual ~SuperTrap();

		virtual SuperTrap &operator=(const SuperTrap &input);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
};

#endif
