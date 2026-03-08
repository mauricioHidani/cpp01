/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Log.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 13:38:14 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/08 17:08:53 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOG_HPP
# define LOG_HPP

# include <iostream>
# include <stdexcept>
# include <ctime>

# define LOG_INFO "info"
# define LOG_WARN "warning"
# define LOG_ERRO "error"

namespace log
{
	std::string	getTimestamp(void);
	void		print(const std::string &type, const std::string &message);
}

#endif
