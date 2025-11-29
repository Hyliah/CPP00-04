/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 19:00:40 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/29 00:32:44 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

static void change_occurence(std::string &line, std::string s1, std::string s2);
static std::string create_buffer(std::ifstream &file, std::string s1, std::string s2);
static std::string my_replace(std::string line, size_t pos, size_t s1_length, std::string s2);

int main(int ac, char **av){
	if (ac != 4)
		return (std::cout << "Error : Enter the right number of parameters" << std::endl, 1);
	
	std::ifstream file(av[1]);
	if (!file)
		return (std::cout << "Error : file is not good" << std::endl, 1);
	
	std::string new_filename = av[1];
	new_filename += ".replace"; 
	
	std::string s1 = av[2];
	std::string s2 = av[3];
	
	std::string buffer = create_buffer(file, s1, s2);
	std::ofstream new_file(new_filename.c_str());
	new_file << buffer;
}

static std::string create_buffer(std::ifstream &file, std::string s1, std::string s2){
	std::string buffer;
	std::string line;

	while(std::getline(file, line))
	{
		change_occurence(line, s1, s2);
		buffer = buffer + line + "\n";
	}
	if (!buffer.empty())
    	buffer.erase(buffer.length() - 1);
	return (buffer);
}

static void change_occurence(std::string &line, std::string s1, std::string s2){
	if (s1.empty())
        return;
	size_t pos = 0;
	while ((pos = line.find(s1, pos)) != std::string::npos){
		line = my_replace(line, pos, s1.length(), s2);
		pos += s2.length();
	}
}

static std::string my_replace(std::string line, size_t pos, size_t s1_length, std::string s2){
	std::string buffer;

	buffer = line.substr(0, pos);
	buffer += s2;
	buffer += line.substr(pos + s1_length, line.length());

	return (buffer);
}
