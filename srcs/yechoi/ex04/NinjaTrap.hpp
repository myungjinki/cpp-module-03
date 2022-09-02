/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 17:01:24 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/13 15:14:24 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap 
{
    public:
        NinjaTrap();
        NinjaTrap(std::string name);
        NinjaTrap(const NinjaTrap & ref);
        NinjaTrap& operator=(const NinjaTrap & ref);
        ~NinjaTrap();
        void	ninjaShoebox(const FragTrap & ref);
        void	ninjaShoebox(const ScavTrap & ref);
        void	ninjaShoebox(const NinjaTrap & ref);
        void    ninjaShoebox(const ClapTrap & ref);        
};

#endif