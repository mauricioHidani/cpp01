/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Log.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 13:42:50 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/08 17:08:41 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Log.hpp"

std::string	log::getTimestamp(void)
{
	char			buffer[20];
	std::time_t		now = std::time(nullptr);
	
	std::strftime(
		buffer, sizeof(buffer),
		"%Y%m%d %H%M%S",
		std::localtime(&now)
	);
	return (buffer);
}

void	log::print(const std::string &type, const std::string &message)
{
	std::cout << "[" << getTimestamp() << "] ";
	std::cout << "[" << type << "]: ";
	std::cout << message << std::endl;
}
