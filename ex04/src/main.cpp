/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 18:25:56 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/08 17:09:41 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include "Log.hpp"

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		log::print(LOG_INFO, "Invalid input");
		std::cout << "<filename> <target> <source>" << std::endl;
		std::cout << "filename: indicate the path and the name of the file";
		std::cout << std::endl;
		std::cout << "target: content that will be replaced in the file";
		std::cout << std::endl;
		std::cout << "source: value used to replace";
		std::cout << std::endl;
	}
	
	try
	{
		rep::replace(argv[1], argv[2], argv[3]);
	}
	catch(const std::runtime_error& e)
	{
		log::print(LOG_ERRO, e.what());
	}
	return (0);
}
