/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:00:09 by kfujita           #+#    #+#             */
/*   Updated: 2023/08/08 02:06:24 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : ICharacter()
{
	for (size_t i = 0; i < CHARACTER_SLOT_LEN; i++)
	{
		this->slot[i] = NULL;
		this->slot_cloned[i] = this->slot[i];
	}
}

Character::Character(const Character &v) : ICharacter(v)
{
	this->name = v.name;

	for (size_t i = 0; i < CHARACTER_SLOT_LEN; i++)
	{
		this->slot[i] = v.slot[i] == NULL ? NULL : v.slot[i]->clone();
		this->slot_cloned[i] = this->slot[i];
	}
}

Character &Character::operator=(const Character &v)
{
	this->ICharacter::operator=(v);

	if (this == &v)
		return *this;
	
	this->name = v.name;

	for (size_t i = 0; i < CHARACTER_SLOT_LEN; i++)
	{
		this->slot[i] = v.slot[i] == NULL ? NULL : v.slot[i]->clone();
		this->slot_cloned[i] = this->slot[i];
	}

	return *this;
}

Character::Character(const std::string &name) : ICharacter()
{
	this->name = name;

	for (size_t i = 0; i < CHARACTER_SLOT_LEN; i++)
	{
		this->slot[i] = NULL;
		this->slot_cloned[i] = this->slot[i];
	}
}

Character::~Character()
{
	for (size_t i = 0; i < CHARACTER_SLOT_LEN; i++)
	{
		if (this->slot_cloned[i] != NULL)
			delete this->slot_cloned[i];
	}
}

std::string const &Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria *m)
{
	for (size_t i = 0; i < CHARACTER_SLOT_LEN; i++)
	{
		if (this->slot[i] != NULL)
			continue;
		
		this->slot[i] = m;
		return;
	}
}

void Character::unequip(int idx)
{
	if (CHARACTER_SLOT_LEN <= idx || this->slot[idx] == NULL)
		return;

	this->slot[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (CHARACTER_SLOT_LEN <= idx || this->slot[idx] == NULL)
		return;
	
	this->slot[idx]->use(target);
}
