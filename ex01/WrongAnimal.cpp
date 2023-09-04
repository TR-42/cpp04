/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:50:19 by kfujita           #+#    #+#             */
/*   Updated: 2023/08/06 23:40:34 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout
		<< "WrongAnimal class default constructor called"
		<<" ("
		<< this
		<< ")"
		<< std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &v)
{
	std::cout
		<< "WrongAnimal class copy constructor called"
		<<" (copy from "
		<< &v
		<< " to "
		<< this
		<< ")"
		<< std::endl;

	this->type = v.type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout
		<< "WrongAnimal class destructor called"
		<<" ("
		<< this
		<< ")"
		<< std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &v)
{
	std::cout
		<< "WrongAnimal class copy assignment operator called"
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

void WrongAnimal::makeSound() const
{
	std::cout
		<< "WrongAnimal ("
		<< this->type
		<< ") has no sound"
		<< std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}
