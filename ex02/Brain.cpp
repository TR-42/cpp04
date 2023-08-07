/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 20:43:17 by kfujita           #+#    #+#             */
/*   Updated: 2023/08/07 21:51:05 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Brain.hpp"

Brain::Brain()
{
	std::cout
		<< "Brain class default constructor called"
		<<" ("
		<< this
		<< ")"
		<< std::endl;
}

Brain::Brain(const Brain &v)
{
	std::cout
		<< "Brain class copy constructor called"
		<<" (copy from "
		<< &v
		<< " to "
		<< this
		<< ")"
		<< std::endl;
	
	for (size_t i = 0; i < BRAIN_IDEAS_COUNT; i++)
		this->ideas[i] = v.ideas[i];
}

Brain::~Brain()
{
	std::cout
		<< "Brain class destructor called"
		<<" ("
		<< this
		<< ")"
		<< std::endl;
}

Brain &Brain::operator=(const Brain &v)
{
	std::cout
		<< "Brain class copy assignment operator called"
		<<" (copy from "
		<< &v
		<< " to "
		<< this
		<< ")"
		<< std::endl;

	if (this == &v)
		return *this;

	for (size_t i = 0; i < BRAIN_IDEAS_COUNT; i++)
		this->ideas[i] = v.ideas[i];

	return *this;
}

std::string Brain::getIdea(size_t index) const
{
	return index < BRAIN_IDEAS_COUNT
		? this->ideas[index]
		: std::string();
}

void Brain::setIdea(size_t index, const std::string &v)
{
	if (index < BRAIN_IDEAS_COUNT)
		this->ideas[index] = v;
}
