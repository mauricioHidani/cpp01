/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 09:22:14 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/06 11:02:57 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
	std::string	_name;

public:
	Zombie(void);
	~Zombie(void);

	void		setName(const std::string &name);
	std::string	getName(void) const;

	void		announce(void) const;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
