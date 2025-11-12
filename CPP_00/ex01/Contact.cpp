/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:29:40 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/12 19:44:27 by hlichten         ###   ########.fr       */
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

std::string Contact::get_last_name(void) const{
    return (this -> _LastName);
}

std::string Contact::get_nickname(void) const{
    return (this -> _Nickname);
}

std::string Contact::get_phone_number(void) const{
    return (this -> _PhoneNumber);
}

std::string Contact::get_darkest_secret(void) const{
    return (this -> _DarkestSecret);
}

void    Contact::set_first_name(std::string str){
    this->_FirstName = str;
}

void    Contact::set_last_name(std::string str){
    this->_LastName = str;
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
