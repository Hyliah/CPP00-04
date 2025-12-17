/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_command.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:35:17 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/17 22:42:25 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"

static void	print_labels();
static std::string	adjust_format(std::string str);
static void	print_contact(PhoneBook &book, int index);
static int	display_contact(PhoneBook &book, int count);
static bool	verify_number(int index_max, const std::string &str);

int	search_command(PhoneBook &book){
	int	count = (book.get_count());

	if (count > 0)
		print_labels();
	for (int i = 0; i < count ; i++)
	{
		Contact &c = book.get_contact(i);
		std::cout << std::setw(10) << std::right << i << "|";
		std::cout << std::setw(10) << std::right << adjust_format(c.get_first_name()) << "|";
		std::cout << std::setw(10) << std::right << adjust_format(c.get_last_name()) << "|";
		std::cout << std::setw(10) << std::right << adjust_format(c.get_nickname()) << std::endl;
	}
	if (count >= 1){
		if (display_contact(book, count))
			return 1;
	}
	else
		std::cout << "No contact to display" << std::endl;
	return 0;
}

static std::string	adjust_format(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0,9) + ".");
	return str;
}

static int	display_contact(PhoneBook &book, int count){
	std::string buffer;
	int	index_max = count - 1;

	std::cout << "Enter an index number : ";
	if (get_line(buffer))
		return 1;
	while (verify_number(index_max, buffer) == false){
		std::cout << "Enter an index number : ";
		if (get_line(buffer))
			return 1;
	}
	print_contact(book, static_cast<unsigned int>(buffer[0] - '0'));
	return 0;
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

static void	print_labels(){
	std::cout << std::setw(11) << std::right << "INDEX  ";
	std::cout << std::setw(11) << std::right << "FIRST NAME";
	std::cout << std::setw(11) << std::right << "LAST NAME ";
	std::cout << std::setw(11) << std::right << "NICKNAME  " << std::endl;
}