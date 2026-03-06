/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 12:18:34 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/06 12:40:44 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon		*_weapon;

public:
	HumanB(const std::string &name);
	~HumanB(void);

	void		setName(const std::string &name);
	void		setWeapon(Weapon &weapon);
	std::string	getName(void) const;
	Weapon		getWeapon(void) const;

	void		attack(void) const;
};

#endif
