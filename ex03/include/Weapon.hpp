/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 11:50:15 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/06 12:02:32 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
private:
	std::string	_type;

protected:

public:
	Weapon(void);
	Weapon(const std::string type);
	~Weapon(void);

	void		setType(const std::string &type);
	std::string	getType(void) const;
};

#endif
