/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 01:41:08 by kfujita           #+#    #+#             */
/*   Updated: 2023/08/08 01:59:50 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

#define MATERIA_SOURCE_M_ARR_LEN 4

class MateriaSource : public IMateriaSource
{
private:
	AMateria* m_arr[MATERIA_SOURCE_M_ARR_LEN];
public:
	MateriaSource();
	MateriaSource(const MateriaSource& v);

	MateriaSource& operator=(const MateriaSource& v);

	virtual ~MateriaSource();
	virtual void learnMateria(AMateria* v);
	virtual AMateria* createMateria(std::string const & type);
};
