/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 17:24:59 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/08 18:07:10 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	harl;

	std::cout << "DEBUG - Test" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "INFO - Test" << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;
	
	std::cout << "WARNING - Test" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;

	std::cout << "ERROR - Test" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;

	std::cout << "INVALID - Test" << std::endl;
	harl.complain("BLACK HOLE");
	harl.complain("");

	std::cout << "End of testing" << std::endl;
	return (0);
}
