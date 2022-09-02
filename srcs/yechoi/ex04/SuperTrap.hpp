/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 15:18:02 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/14 14:56:54 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap
{
    public:
        SuperTrap();
        SuperTrap(std::string name);
        SuperTrap(const SuperTrap & ref);
        SuperTrap& operator=(const SuperTrap & ref);
        ~SuperTrap();

        unsigned int    rangedAttack(std::string const & target);
        unsigned int    meleeAttack(std::string const & target);        
};

#endif