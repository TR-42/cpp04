/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 23:36:33 by kfujita           #+#    #+#             */
/*   Updated: 2023/08/07 22:11:38 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	Animal* arr[4];

	arr[0] = new Cat();
	arr[1] = new Dog();

	(*(Cat *)arr[0]).setIdea(0, "Cat Idea 0");
	(*(Dog *)arr[1]).setIdea(0, "Dog Idea 0");

	arr[2] = new Cat(*(Cat*)(arr[0]));
	arr[3] = new Dog(*(Dog*)(arr[1]));

	std::cout << std::endl;
	std::cout << __FILE__ << ':' << __LINE__ << "~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << std::endl;

	std::cout
		<< "arr[0] (Cat) -> brain -> item[0]: "
		<< (*(Cat *)arr[0]).getIdea(0)
		<< std::endl;
	std::cout
		<< "arr[1] (Dog) -> brain -> item[0]: "
		<< (*(Dog *)arr[1]).getIdea(0)
		<< std::endl;
	std::cout
		<< "arr[2] (Cat) -> brain -> item[0]: "
		<< (*(Cat *)arr[2]).getIdea(0)
		<< std::endl;
	std::cout
		<< "arr[3] (Dog) -> brain -> item[0]: "
		<< (*(Dog *)arr[3]).getIdea(0)
		<< std::endl;

	std::cout << std::endl;
	std::cout << __FILE__ << ':' << __LINE__ << "~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << std::endl;

	(*(Cat *)arr[0]).setIdea(0, "Cat Idea 0 New");
	(*(Dog *)arr[1]).setIdea(0, "Dog Idea 0 New");

	std::cout
		<< "arr[0] (Cat) -> brain -> item[0]: "
		<< (*(Cat *)arr[0]).getIdea(0)
		<< std::endl;
	std::cout
		<< "arr[1] (Dog) -> brain -> item[0]: "
		<< (*(Dog *)arr[1]).getIdea(0)
		<< std::endl;
	std::cout
		<< "arr[2] (Cat) -> brain -> item[0]: "
		<< (*(Cat *)arr[2]).getIdea(0)
		<< std::endl;
	std::cout
		<< "arr[3] (Dog) -> brain -> item[0]: "
		<< (*(Dog *)arr[3]).getIdea(0)
		<< std::endl;

	std::cout << std::endl;
	std::cout << __FILE__ << ':' << __LINE__ << "~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << std::endl;

	for (size_t i = 0; i < 4; i++)
		delete arr[i];

	return (0);
}
