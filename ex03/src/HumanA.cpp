/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 11:59:17 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/06 12:18:04 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon)
	: _name(name), _weapon(weapon)
{
}

HumanA::~HumanA(void)
{
	std::cout << _name << " died" << std::endl;
}

void	HumanA::setName(const std::string &name)
{
	_name = name;
}

std::string	HumanA::getName(void) const
{
	return (_name);
}

void	HumanA::setWeapon(const Weapon &weapon)
{
	_weapon = weapon;
}

Weapon	*HumanA::getWeapon(void) const
{
	return (&_weapon);
}

void	HumanA::attack(void) const
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
