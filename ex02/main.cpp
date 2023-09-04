/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 23:36:33 by kfujita           #+#    #+#             */
/*   Updated: 2023/08/07 22:35:14 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongCat.hpp"

static void _TestWrongCat()
{
	std::cout << std::endl;
	std::cout << __FILE__ << ':' << __LINE__ << "~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << std::endl;

	WrongCat* wrongCat = new WrongCat();

	std::cout << std::endl;
	std::cout << __FILE__ << ':' << __LINE__ << "~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << std::endl;

	std::cout
		<< "wrongCat type: "
		<< wrongCat->getType()
		<< std::endl;

	std::cout << std::endl;
	std::cout << __FILE__ << ':' << __LINE__ << "~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << std::endl;

	wrongCat->makeSound();
	std::cout << "---" << std::endl;
	((WrongAnimal *)wrongCat)->makeSound();

	std::cout << std::endl;
	std::cout << __FILE__ << ':' << __LINE__ << "~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << std::endl;

	delete wrongCat;
}

int	main(void)
{
#ifdef CHECK_PURE_VIRTUAL
	const Animal* meta = new Animal();
#endif
	const Animal* cat = new Cat();
	const Animal* dog = new Dog();

	std::cout << std::endl;
	std::cout << __FILE__ << ':' << __LINE__ << "~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << std::endl;

	std::cout
		<< "cat type: "
		<< cat->getType()
		<< std::endl;
	std::cout
		<< "dog type: "
		<< dog->getType()
		<< std::endl;

	std::cout << std::endl;
	std::cout << __FILE__ << ':' << __LINE__ << "~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << std::endl;

	cat->makeSound();
	dog->makeSound();

	std::cout << std::endl;
	std::cout << __FILE__ << ':' << __LINE__ << "~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << std::endl;

#ifdef CHECK_PURE_VIRTUAL
	delete meta;
#endif
	delete cat;
	delete dog;

	_TestWrongCat();

	return (0);
}
