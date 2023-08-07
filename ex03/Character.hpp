/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:00:23 by kfujita           #+#    #+#             */
/*   Updated: 2023/08/08 01:49:41 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

#include "ICharacter.hpp"

#define CHARACTER_SLOT_LEN 4

class Character : public ICharacter
{
private:
	AMateria* slot[CHARACTER_SLOT_LEN];
	AMateria* slot_cloned[CHARACTER_SLOT_LEN];
	std::string name;

public:
	Character();
	Character(const Character& v);

	Character& operator=(const Character& v);

	Character(const std::string& name);

	virtual ~Character();
	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};
