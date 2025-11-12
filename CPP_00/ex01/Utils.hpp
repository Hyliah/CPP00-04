/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 00:24:23 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/12 19:05:48 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

#include <iostream>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cctype>

#include "PhoneBook.hpp"
#include "Contact.hpp"

void	add_command(PhoneBook &book);
void	search_command(PhoneBook &book);

int		exit_command(void);
int 	get_line(std::string &buffer);

#endif