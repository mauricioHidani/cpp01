/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 02:46:54 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/08 17:20:14 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

std::string	rep::getContent(std::ifstream &stream)
{
	std::stringstream	buffer;
	std::string			content;

	buffer << stream.rdbuf();
	content = buffer.str();
	return (content);
}

std::string	rep::putTargetInEnd(std::string path, const std::string &target)
{
	std::string	name;
	std::string	extension;
	std::size_t	posFind;

	if (path.empty())
		throw std::runtime_error("File path is empty");
	if (target.empty())
		throw std::runtime_error("The target value is empty");
	
	posFind = path.rfind('.');
	if (posFind != std::string::npos)
	{
		name = path.substr(0, posFind);
		extension = path.substr(posFind);
		return (name + target + extension);	
	}
	return (path + target);
}

std::string	rep::readFile(const std::string &path)
{
	std::ifstream	fileStream; // Input File STREAM
	std::string		content;

	if (path.empty())
		throw std::runtime_error("File path is empty");
	
	fileStream.open(path.c_str(), std::ios::in);
		if (!fileStream.is_open())
			throw std::runtime_error("File not found or no permissions");
	
	content = getContent(fileStream);
	fileStream.close();
	return (content);
}

void	rep::writeFile(const std::string &path, const std::string &content)
{
	std::ofstream	fileStream; // Output File STREAM

	if (path.empty())
		throw std::runtime_error("File path is empty");
	
	fileStream.open(path.c_str(), std::ios::out | std::ios::trunc);
	if (!fileStream.is_open())
		throw std::runtime_error("Path not found or no permissions");
	
	fileStream << content;
	fileStream.close();
}

void	rep::replace(const std::string &path, const std::string &target, 
					 const std::string &source)
{
	std::size_t	posFind;
	std::string	content;
	std::string	newPath;

	if (target.empty())
		throw std::runtime_error("Target is empty");
	posFind = 0;
	content = readFile(path);
	while ((posFind = content.find(target, posFind))!= std::string::npos)
	{
		content.erase(posFind, target.length());
		content.insert(posFind, source);
		posFind += source.length();
	}
	newPath = putTargetInEnd(path, ".replace");
	writeFile(newPath, content);
	lgg::print(LOG_INFO, "File is created " + newPath);
}
