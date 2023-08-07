/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 23:35:49 by kfujita           #+#    #+#             */
/*   Updated: 2023/08/07 21:52:44 by kfujita          ###   ########.fr       */
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
	this->brain = new Brain();
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

	this->brain = new Brain(*(v.brain));
}

Cat::~Cat()
{
	std::cout
		<< "Cat class destructor called"
		<<" ("
		<< this
		<< ")"
		<< std::endl;

	delete this->brain;
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

	this->brain = new Brain(*(v.brain));

	return *this;
}

void Cat::makeSound() const
{
	std::cout
		<< this->type
		<< " made sound `meow`"
		<< std::endl;
}

std::string Cat::getIdea(size_t index) const
{
	return this->brain->getIdea(index);
}

void Cat::setIdea(size_t index, const std::string &v)
{
	this->brain->setIdea(index, v);
}
