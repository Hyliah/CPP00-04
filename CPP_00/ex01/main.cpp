/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 23:02:10 by hlichten          #+#    #+#             */
/*   Updated: 2025/10/30 21:15:47 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>
#include "PhoneBook.hpp"

void	add_command(void);
void	search_command(void);
int		exit_command(void);

int main()
{
	int running = 1;
	//int index = 0;

	std::cout << "type 'ADD' to add a contact, 'SEARCH' to search for a contact or 'EXIT to leave the program" << std::endl;
	while (running){
		std::cout << "Command : ";
		std::string buffer;
		std::cin >> buffer;
		if (buffer == "ADD")
			add_command();
		else if (buffer == "SEARCH")
			search_command();
		else if (buffer == "EXIT")
			running = exit_command();
	}

	return 0;
}

void	add_command(void){
	std::cout << "'ADD' baby" << std::endl;
}

void	search_command(void){
	std::cout << "'SEARCH' baby" << std::endl;
}

int		exit_command(void){
	std::cout << "Thank you for using this awsome PhoneBook, see you next time !" << std::endl;
	return (0);
}

// Welcome to the 80s and their unbelievable technology! Write a program that behaves 
// like a crappy awesome phonebook software.

// You have to implement two classes:
// • PhoneBook
// ◦ It has an array of contacts.
// ◦ It can store a maximum of 8 contacts. If the user tries to add a 9th contact, replace the oldest one by the new one.
// ◦ Please note that dynamic allocation is forbidden. 
// • Contact
// ◦ Stands for a phonebook contact.

// In your code, the phonebook must be instantiated as an instance of the PhoneBook class. 
// Same thing for the contacts. Each one of them must be instantiated as an instance of the Contact class. 
// You’re free to design the classes as you like but keep in mind that anything that will always be used 
// inside a class is private, and that anything that can be used outside a class is public.

// Don’t forget to watch the intranet videos.

// At program start-up, the phonebook is empty and the user is prompted to enter one of three commands. 
// The program only accepts ADD, SEARCH and EXIT.

// • ADD: save a new contact
// ◦ If the user enters this command, they are prompted to input the information of the new contact one field at a time. 
// Once all the fields have been completed, add the contact to the phonebook.
// ◦ The contact fields are: first name, last name, nickname, phone number, and darkest secret. A saved contact can’t have empty fields.
// • SEARCH: display a specific contact
// ◦ Display the saved contacts as a list of 4 columns: index, first name, last
// name and nickname.
// ◦ Each column must be 10 characters wide. A pipe character (’|’) separates them. The text must be right-aligned.
// If the text is longer than the column, it must be truncated and the last displayable character must be replaced by a dot (’.’).
// ◦ Then, prompt the user again for the index of the entry to display. If the index is out of range or wrong, define a relevant behavior. 
// Otherwise, display the contact information, one field per line.
// • EXIT
// ◦ The program quits and the contacts are lost forever!
// • Any other input is ignored.

// Once a command has been correctly executed, the program waits for another one. It
// stops when the user inputs EXIT.
// Give a relevant name to your executable.
// http://www.cplusplus.com/reference/string/string/ and of course
// http://www.cplusplus.com/reference/iomanip/

 