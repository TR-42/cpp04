/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 22:47:07 by kfujita           #+#    #+#             */
/*   Updated: 2023/08/08 02:06:37 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(const AMateria &v) :
	type(v.type)
{
}

AMateria::~AMateria()
{
}

AMateria &AMateria::operator=(const AMateria &v)
{
	if (this == &v)
		return *this;
	
	this->type = v.type;

	return *this;
}

AMateria::AMateria(std::string const &type) :
	type(type)
{
}

std::string const &AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter &target)
{
	std::cout
		<< "Character "
		<< target.getName()
		<< "used unknown materia"
		<< this->getType()
		<< std::endl;
}
