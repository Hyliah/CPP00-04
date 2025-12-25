/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 21:41:55 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/24 23:54:47 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

void	Harl::debug( void ){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info( void ){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn t put enough bacon in my burger! If you did, I wouldn t be asking for more!" << std::endl;
}

void	Harl::warning( void ){
	std::cout << "I think I deserve to have some extra bacon for free. I ve been coming for years, whereas you started working here just last month." << std::endl;
}

void	Harl::error( void ){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl(void){
}

Harl::~Harl(void){
}

void	Harl::complain( std::string level)
{
	static const char	*tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*p[4])(void) = {&Harl::debug, &Harl::info, &Harl:: warning, &Harl::error};

	for (int i = 0; i < 4; i++){
		if (level == tab[i]){
			(this->*p[i])();
			return;
		}
	}
	std::cout << "I love to complain but I need a word I know like DEBUG, WARNING, INFO or ERROR" << std::endl;
}
