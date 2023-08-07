/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:59:54 by kfujita           #+#    #+#             */
/*   Updated: 2023/08/07 21:52:29 by kfujita          ###   ########.fr       */
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
	this->brain = new Brain();
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

	this->brain = new Brain(*(v.brain));
}

Dog::~Dog()
{
	std::cout
		<< "Dog class destructor called"
		<<" ("
		<< this
		<< ")"
		<< std::endl;

	delete this->brain;
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

	this->brain = new Brain(*(v.brain));

	return *this;
}

void Dog::makeSound() const
{
	std::cout
		<< this->type
		<< " made sound `bark`"
		<< std::endl;
}

std::string Dog::getIdea(size_t index) const
{
	return this->brain->getIdea(index);
}

void Dog::setIdea(size_t index, const std::string &v)
{
	this->brain->setIdea(index, v);
}
