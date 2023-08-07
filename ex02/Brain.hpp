/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 20:30:57 by kfujita           #+#    #+#             */
/*   Updated: 2023/08/07 21:48:59 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

#define BRAIN_IDEAS_COUNT 100

class Brain
{
private:
	std::string ideas[BRAIN_IDEAS_COUNT];

public:
	Brain();
	Brain(const Brain& v);
	~Brain();

	Brain& operator=(const Brain& v);

	std::string getIdea(size_t index) const;
	void setIdea(size_t index, const std::string& v);
};
