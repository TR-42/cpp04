/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 23:35:49 by kfujita           #+#    #+#             */
/*   Updated: 2023/08/06 23:43:00 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "WrongCat.hpp"

WrongCat::WrongCat() :
	WrongAnimal()
{
	std::cout
		<< "WrongCat class default constructor called"
		<<" ("
		<< this
		<< ")"
		<< std::endl;

	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &v) :
	WrongAnimal(v)
{
	std::cout
		<< "WrongCat class copy constructor called"
		<<" (copy from "
		<< &v
		<< " to "
		<< this
		<< ")"
		<< std::endl;
}

WrongCat::~WrongCat()
{
	std::cout
		<< "WrongCat class destructor called"
		<<" ("
		<< this
		<< ")"
		<< std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat v)
{
	this->WrongAnimal::operator=(v);
	std::cout
		<< "WrongCat class copy assignment operator called"
		<<" (copy from "
		<< &v
		<< " to "
		<< this
		<< ")"
		<< std::endl;

	if (this == &v)
		return *this;

	return *this;
}

void WrongCat::makeSound() const
{
	std::cout
		<< this->type
		<< " made sound `meow`"
		<< std::endl;
}
