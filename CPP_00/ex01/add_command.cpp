/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_cmmand.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:40:34 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/12 18:37:54 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"

static bool	verify_entry(const std::string& str, bool is_phone_number);
static void	ask_set_contact(std::string message, std::string &buffer, Contact &contact, void (Contact::*setter)(std::string), bool is_phone);

void	add_command(PhoneBook &book){
	std::string buffer;
	Contact c;
	
	ask_set_contact("Enter First Name : ", buffer, c, (&Contact::set_first_name), false);
	ask_set_contact("Enter Last Name : ", buffer, c, (&Contact::set_last_name), false);
	ask_set_contact("Enter Nickname : ", buffer, c, (&Contact::set_nickname), false);
	ask_set_contact("Enter Phone Number : ", buffer, c, (&Contact::set_phone_number), true);
	ask_set_contact("Enter Darkest Secret : ", buffer, c, (&Contact::set_darkest_secret), false);
	book.add_contact(c);
}

// system avec getline a checker
static void    ask_set_contact(std::string message, std::string &buffer, Contact &contact, void (Contact::*setter)(std::string), bool is_phone)
{
	std::cout << message;
	if (get_line(buffer))
		return ;
	while (verify_entry(buffer, is_phone) == false){
		std::cout << message;
		if (get_line(buffer))
			return ;
	}
	(contact.*setter)(buffer);
}

static bool	verify_entry(const std::string& str, bool is_phone_number)
{
	if (str.empty()) {
		std::cout << "Invalid entry: please enter something." << std::endl;
		return false;
	}
	
	if (!is_phone_number){
		int	alphanum = 0;
		for (size_t i = 0; i < str.length(); ++i){
			if (std::isalnum(static_cast<unsigned char>(str[i])))
				alphanum++;
		}
		if (alphanum == 0){
			std::cout << "Invalid entry : please enter at least one alpha numeric character" << std::endl;
			return false;
		}
	}

	if (is_phone_number) {
		for (size_t i = 0; i < str.length(); ++i) {
			if (!std::isdigit(static_cast<unsigned char>(str[i]))) {
				std::cout << "Invalid phone number: please use digits only." << std::endl;
				return false;
			}
		}
	}
	return true;
}
