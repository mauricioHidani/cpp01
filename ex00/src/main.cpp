/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 09:23:09 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/06 10:29:32 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*heapZombie = newZombie("heapZombie ✌️ ");
	randomChump("stackZombie 🤙");

	heapZombie->announce();
	delete heapZombie;
	return (0);
}
