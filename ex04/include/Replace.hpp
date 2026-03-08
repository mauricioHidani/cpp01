/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 12:59:41 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/08 16:59:36 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <stdexcept>
# include <fstream>
# include <sstream>

# include "Log.hpp"

namespace rep
{
	std::string		getContent(std::ifstream &stream);
	std::string		putTargetInEnd(std::string path, const std::string &target);
	std::string		readFile(const std::string &path);
	void			writeFile(const std::string &path, 
					const std::string &content);
	void			replace(const std::string &path, const std::string &target, 
					const std::string &sorce);
}

#endif
