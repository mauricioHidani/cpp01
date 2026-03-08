/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 17:26:22 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/08 18:52:27 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon on my hamburger.";
	std::cout << std::endl;
}

void	Harl::info(void)
{
	std::cout << "You didn't put enough bacon on my burger!";
	std::cout << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve free extra bacon.";
	std::cout << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager";
	std::cout << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*funcs[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	for (int i = 0; i < 4; i++)
		if (level.compare(levels[i]) == 0)
			(this->*funcs[i])();
}
