/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 23:35:49 by kfujita           #+#    #+#             */
/*   Updated: 2023/08/06 23:43:00 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Cat.hpp"

Cat::Cat() :
	Animal()
{
	std::cout
		<< "Cat class default constructor called"
		<<" ("
		<< this
		<< ")"
		<< std::endl;

	this->type = "Cat";
}

Cat::Cat(const Cat &v) :
	Animal(v)
{
	std::cout
		<< "Cat class copy constructor called"
		<<" (copy from "
		<< &v
		<< " to "
		<< this
		<< ")"
		<< std::endl;
}

Cat::~Cat()
{
	std::cout
		<< "Cat class destructor called"
		<<" ("
		<< this
		<< ")"
		<< std::endl;
}

Cat &Cat::operator=(const Cat v)
{
	this->Animal::operator=(v);
	std::cout
		<< "Cat class copy assignment operator called"
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

void Cat::makeSound() const
{
	std::cout
		<< this->type
		<< " made sound `meow`"
		<< std::endl;
}
