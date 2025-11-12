/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_command.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:35:17 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/12 18:59:59 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"

static void	display_contact(PhoneBook &book);
static bool	verify_number(int index_max, const std::string &str);
static std::string	adjust_format(std::string str);

void	search_command(PhoneBook &book){
	int	count = (book.get_count() - 1);

	for (int i = 0; i < count ; i++)
	{
		Contact &c = book.get_contact(i);
		std::cout << std::setw(10) << i << " | ";
		std::cout << std::setw(10) << adjust_format(c.get_first_name()) << " | ";
		std::cout << std::setw(10) << adjust_format(c.get_last_name()) << " | ";
		std::cout << std::setw(10) << adjust_format(c.get_nickname()) << std::endl;
	}
		if (book.get_count() < 1)
			display_contact(book);
}

static std::string	adjust_format(std::string str)
{

	// for (size_t i = 0; i < str.length(); ++i){
	// 	if (std::isspace(static_cast<unsigned char>(str[i])))
	// 			alphanum++;
	// }


	if (str.length() > 10)
		return (str.substr(0,9) + ".");
	return str;
}

static void    display_contact(PhoneBook &book){
	std::string buffer;
	int	index_max = book.get_count();

	std::cout << "Enter a number between 0 and " << (index_max) << " : ";
	if (get_line(buffer))
		return ;
	while (verify_number(index_max, buffer) == false){
		std::cout << "Enter a number between 0 and " << (index_max) << " : ";
		if (get_line(buffer))
			return ;
	}
	std::cout << "YO";
}

static bool	verify_number(int index_max, const std::string &str)
{
	if (str.length() != 1)
		return false;
	if ((static_cast<unsigned char>(str[0]) >= 0 && static_cast<unsigned char>(str[0]) <= index_max))
		return true;
	return false;
}
