/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 01:43:54 by kfujita           #+#    #+#             */
/*   Updated: 2023/08/08 02:07:11 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

#include "Cure.hpp"
#include "Ice.hpp"

MateriaSource::MateriaSource()
{
	for (size_t i = 0; i < MATERIA_SOURCE_M_ARR_LEN; i++)
		this->m_arr[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &v)
{
	for (size_t i = 0; i < MATERIA_SOURCE_M_ARR_LEN; i++)
		this->m_arr[i] = v.m_arr[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &v)
{
	if (this == &v)
		return *this;

	for (size_t i = 0; i < MATERIA_SOURCE_M_ARR_LEN; i++)
		this->m_arr[i] = v.m_arr[i];

	return *this;
}

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < MATERIA_SOURCE_M_ARR_LEN; i++)
	{
		if (this->m_arr[i] != NULL)
			delete this->m_arr[i];
	}
}

void MateriaSource::learnMateria(AMateria *v)
{
	for (size_t i = 0; i < MATERIA_SOURCE_M_ARR_LEN; i++)
	{
		if (this->m_arr[i] != NULL)
			continue;
		this->m_arr[i] = v;
		return;
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (size_t i = 0; i < MATERIA_SOURCE_M_ARR_LEN; i++)
	{
		if (this->m_arr[i] == NULL || this->m_arr[i]->getType() != type)
			continue;

		return this->m_arr[i]->clone();
	}

	return NULL;
}
