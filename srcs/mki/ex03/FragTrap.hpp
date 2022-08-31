/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 17:12:32 by mki               #+#    #+#             */
/*   Updated: 2021/08/02 12:39:01 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include "ScavTrap.hpp"

class	FragTrap: virtual public ClapTrap
{
public:
	FragTrap();
	FragTrap(const std::string name);
	FragTrap(const FragTrap &s);
	FragTrap &operator=(const FragTrap &s);
	~FragTrap();
	void	highFivesGuys(void);
};

#endif
