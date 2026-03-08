/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 17:26:22 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/08 18:00:04 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Harl is created" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "Harl destroyed" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "Eu amo ter bacon extra para o meu hambúrguer ";
	std::cout << "7XL-duplo-queijo-triplo-picles-ketchup-especial. Eu ";
	std::cout << "realmente amo!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "Eu não acredito que adicionar bacon extra custa mais ";
	std::cout << "dinheiro. Vocês não colocaram bacon suficiente no meu ";
	std::cout << "hambúrguer! Se vocês tivessem colocado, eu não estaria ";
	std::cout << "pedindo por mais!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "Eu acho que mereço ter bacon extra de graça. Eu venho aqui ";
	std::cout << "há anos, enquanto você começou a trabalhar aqui apenas no ";
	std::cout << "mês passado." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "Isto é inaceitável! Eu quero falar com o gerente ";
	std::cout << "agora." << std::endl;
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
