/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 12:23:01 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/06 12:40:53 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name)
	: _name(name), _weapon(NULL)
{
}

HumanB::~HumanB(void)
{
	std::cout << _name << " died" << std::endl;
}

void	HumanB::setName(const std::string &name)
{
	_name = name;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

std::string	HumanB::getName(void) const
{
	return (_name);
}

Weapon	HumanB::getWeapon(void) const
{
	return (*_weapon);
}

void	HumanB::attack(void) const
{
	if (_weapon == NULL)
	{
		std::cout << _name << " can't attack without a weapon" << std::endl;
		return ;
	}
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}
