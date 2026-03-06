/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 11:51:14 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/06 12:03:01 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
}

Weapon::Weapon(const std::string type)
{
	_type = type;
}

Weapon::~Weapon(void)
{
}

void	Weapon::setType(const std::string &type)
{
	if (type.empty())
		return ;
	_type = type;
}

std::string	Weapon::getType(void) const
{
	return (_type);
}
