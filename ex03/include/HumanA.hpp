/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 11:55:36 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/06 12:18:12 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_CPP
# define HUMAN_A_CPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon		&_weapon;

public:
	HumanA(const std::string &name, Weapon &weapon);
	~HumanA(void);

	void		setName(const std::string &name);
	std::string	getName(void) const;
	void		setWeapon(const Weapon &weapon);
	Weapon		*getWeapon(void) const;

	void		attack(void) const;
};

#endif
