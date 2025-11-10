/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:16:31 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/10 17:38:04 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void){
    count = 0;
    next_index = 0;
    std::cout << "constructed" << std::endl;
}

PhoneBook::~PhoneBook(void){
    std::cout << "destructed" << std::endl;
}

Contact& PhoneBook::get_contact(int index){
    return contacts[index];
}

void    PhoneBook::add_contact(const Contact& c){
    contacts[next_index] = c;
    next_index = (next_index + 1) % 8;
    if (count < 8)
        count++;
}

int PhoneBook::get_count(){
    return (count);
}
