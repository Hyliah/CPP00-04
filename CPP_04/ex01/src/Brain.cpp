/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 21:40:55 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/11 22:25:32 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain default constructor called" << std::endl;
}
Brain::Brain(Brain &other){
	std::cout << "Brain copy constructor called" << std::endl;
}
Brain& Brain::operator=(Brain& other){
	std::cout << "Brain copy assignment operator called" << std::endl;
}
Brain::~Brain(){
	std::cout << "Brain destructor called" << std::endl;
}