/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_command.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:35:17 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/12 22:08:47 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"

static std::string	adjust_format(std::string str);
static void	print_contact(PhoneBook &book, int index);
static void	display_contact(PhoneBook &book, int count);
static bool	verify_number(int index_max, const std::string &str);

void	search_command(PhoneBook &book){
	int	count = (book.get_count());

	for (int i = 0; i < count ; i++)
	{
		Contact &c = book.get_contact(i);
		std::cout << std::setw(10) << i << " | ";
		std::cout << std::setw(10) << adjust_format(c.get_first_name()) << " | ";
		std::cout << std::setw(10) << adjust_format(c.get_last_name()) << " | ";
		std::cout << std::setw(10) << adjust_format(c.get_nickname()) << std::endl;
	}
	if (book.get_count() >= 1)
		display_contact(book, count);
	else
		std::cout << "No contact to display" << std::endl;
}

static std::string	adjust_format(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0,9) + ".");
	return str;
}

static void	display_contact(PhoneBook &book, int count){
	std::string buffer;
	int	index_max = count - 1;

	std::cout << "Enter an index number : ";
	if (get_line(buffer))
		return ;
	while (verify_number(index_max, buffer) == false){
		std::cout << "Enter an index number : ";
		if (get_line(buffer))
			return ;
	}
	print_contact(book, static_cast<unsigned int>(buffer[0] - '0'));
}

static void	print_contact(PhoneBook &book, int index)
{
	Contact &c = book.get_contact(index);
	std::cout << "First Name : " << c.get_first_name() << std::endl;
	std::cout << "Last Name : "<< c.get_last_name() << std::endl;
	std::cout << "Nickname : "<< c.get_nickname() << std::endl;
	std::cout << "Phone Number : "<< c.get_phone_number() << std::endl;
	std::cout << "Darkest Secret : "<< c.get_darkest_secret() << std::endl;
}

static bool	verify_number(int index_max, const std::string &str)
{
	if (str.length() != 1){
		std::cout << "Enter a single digit number" << std::endl;
		return false;
	}

	if ((static_cast<unsigned char>(str[0]) >= '0' && static_cast<unsigned char>(str[0]) <= ('0' + index_max)))
		return true;
	
	std::cout << "Enter a number between 0 and " << (index_max) << std::endl;
	return false;
}
