/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:16:31 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/11 21:29:06 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void) : _Count(0), _NextIndex(0){
}

PhoneBook::~PhoneBook(void){
}

Contact& PhoneBook::get_contact(int index){
    return _Contacts[index];
}

void    PhoneBook::add_contact(const Contact& c){
    _Contacts[_NextIndex] = c;
    _NextIndex = (_NextIndex + 1) % 8;
    if (_Count < 8)
        _Count++;
}

int PhoneBook::get_count(){
    return (_Count); //this->count 
}
