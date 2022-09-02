/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyochoi <hyochoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 09:02:46 by hyochoi           #+#    #+#             */
/*   Updated: 2021/01/26 11:44:36 by hyochoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
	private:
		
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
