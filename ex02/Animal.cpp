/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:50:19 by kfujita           #+#    #+#             */
/*   Updated: 2023/08/07 22:13:45 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"

Animal::Animal()
{
	std::cout
		<< "Animal class default constructor called"
		<<" ("
		<< this
		<< ")"
		<< std::endl;
}

Animal::Animal(const Animal &v)
{
	std::cout
		<< "Animal class copy constructor called"
		<<" (copy from "
		<< &v
		<< " to "
		<< this
		<< ")"
		<< std::endl;

	this->type = v.type;
}

Animal::~Animal()
{
	std::cout
		<< "Animal class destructor called"
		<<" ("
		<< this
		<< ")"
		<< std::endl;
}

Animal &Animal::operator=(const Animal &v)
{
	std::cout
		<< "Animal class copy assignment operator called"
		<<" (copy from "
		<< &v
		<< " to "
		<< this
		<< ")"
		<< std::endl;

	if (this == &v)
		return *this;

	this->type = v.type;

	return *this;
}

std::string Animal::getType() const
{
	return this->type;
}
