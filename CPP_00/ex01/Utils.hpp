/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 00:24:23 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/05 00:28:56 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

#include <iostream>
#include <iostream>
#include <cctype>
#include <cstring>

#include "PhoneBook.hpp"
#include "Contact.hpp"

std::string	get_line(std::string &buffer);

void	    add_command(PhoneBook &book, int index);
void	    search_command(void);

int		    exit_command(void);

bool        verify_entry(const std::string& str, bool is_phone_number);

#endif