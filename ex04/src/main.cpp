/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 18:25:56 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/08 17:22:35 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include "Log.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		lgg::print(LOG_INFO, "Invalid input");
		std::cout << "command help: <filename> <target> <source>";
		std::cout << std::endl;
		std::cout << "filename: indicate the path and the name of the file";
		std::cout << std::endl;
		std::cout << "target: content that will be replaced in the file";
		std::cout << std::endl;
		std::cout << "source: value used to replace";
		std::cout << std::endl;

		return (0);
	}
	
	try
	{
		rep::replace(argv[1], argv[2], argv[3]);
	}
	catch(const std::runtime_error& e)
	{
		lgg::print(LOG_ERRO, e.what());
	}
	return (0);
}
