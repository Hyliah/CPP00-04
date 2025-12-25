/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 00:24:23 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/17 22:16:33 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

#include <iostream>
#include <iomanip>
#include <cstring>
#include <cctype>

#include "PhoneBook.hpp"
#include "Contact.hpp"

int add_command(PhoneBook &book);
int	search_command(PhoneBook &book);
int	exit_command(void);
int get_line(std::string &buffer);

#endif