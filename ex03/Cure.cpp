/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CUre.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 22:52:57 by kfujita           #+#    #+#             */
/*   Updated: 2023/08/07 22:59:39 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure &v) : AMateria(v)
{
}

Cure::~Cure()
{
}

Cure &Cure::operator=(const Cure &v)
{
	this->AMateria::operator=(v);

	if (this == &v)
		return *this;
	
	return *this;
}

AMateria *Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
	std::cout
		<< "* heals "
		<< target.getName()
		<< "'s wounds *"
		<< std::endl;
}
