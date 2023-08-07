/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 23:35:26 by kfujita           #+#    #+#             */
/*   Updated: 2023/08/07 21:51:31 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain* brain;

public:
	Cat();
	Cat(const Cat& v);
	~Cat();

	Cat& operator=(const Cat v);

	void makeSound() const;

	std::string getIdea(size_t index) const;
	void setIdea(size_t index, const std::string& v);
};
