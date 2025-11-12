/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:29:40 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/10 21:12:22 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void){ 
}

Contact::~Contact(void){
}

std::string Contact::get_first_name(void) const{
    return (this -> _FirstName);
}

void    Contact::set_first_name(std::string str){
    this->_FirstName = str;
}

std::string Contact::get_last_name(void) const{
    return (this -> _LastName);
}

void    Contact::set_last_name(std::string str){
    this->_LastName = str;
}

std::string Contact::get_nickname(void) const{
    return (this -> _Nickname);
}

void    Contact::set_nickname(std::string str){
    this->_Nickname = str;
}

void    Contact::set_phone_number(std::string str){
    this->_PhoneNumber = str;
}

void    Contact::set_darkest_secret(std::string str){
    this->_DarkestSecret = str;
}
