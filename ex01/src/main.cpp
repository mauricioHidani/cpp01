/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 09:23:09 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/06 11:03:52 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		horderSize = 5;
	Zombie	*horde = zombieHorde(horderSize, "Bjarne");
	
	for (int i = 0; i < horderSize; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}
