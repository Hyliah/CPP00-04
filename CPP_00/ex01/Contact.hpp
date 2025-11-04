/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:28:56 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/04 22:25:55 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>

class Contact {
	private:
		std::string	_FirstName;
		std::string	_LastName; 
		std::string	_Nickname;
		std::string	_PhoneNumber;
		std::string	_DarkestSecret;
	public:
		Contact(void);
		~Contact(void);
		
		std::string	get_first_name(void) const;
		void		set_first_name(std::string str);
		std::string	get_last_name(void) const;
		void		set_last_name(std::string str);
		std::string	get_nickname(void) const;
		void		set_nickname(std::string str);
		void		set_phone_number(std::string str);
		void		set_darkest_secret(std::string str);
};
#endif