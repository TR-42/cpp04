/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:59:54 by kfujita           #+#    #+#             */
/*   Updated: 2023/08/06 23:40:46 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Dog.hpp"

Dog::Dog() :
	Animal()
{
	std::cout
		<< "Dog class default constructor called"
		<<" ("
		<< this
		<< ")"
		<< std::endl;

	this->type = "Dog";
}

Dog::Dog(const Dog &v) :
	Animal(v)
{
	std::cout
		<< "Dog class copy constructor called"
		<<" (copy from "
		<< &v
		<< " to "
		<< this
		<< ")"
		<< std::endl;
}

Dog::~Dog()
{
	std::cout
		<< "Dog class destructor called"
		<<" ("
		<< this
		<< ")"
		<< std::endl;
}

Dog &Dog::operator=(const Dog v)
{
	this->Animal::operator=(v);
	std::cout
		<< "Dog class copy assignment operator called"
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

void Dog::makeSound() const
{
	std::cout
		<< this->type
		<< " made sound `bark`"
		<< std::endl;
}
