/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:50:25 by kfujita           #+#    #+#             */
/*   Updated: 2023/08/07 22:13:35 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Animal
{
protected:
	std::string type;

public:
	Animal();
	Animal(const Animal& v);
	virtual ~Animal();

	Animal& operator=(const Animal& v);

	virtual void makeSound() const = 0;

	std::string getType() const;
};
