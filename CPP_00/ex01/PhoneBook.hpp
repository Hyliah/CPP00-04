/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:16:36 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/10 17:37:40 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include "Contact.hpp"

class PhoneBook {
    private :
        Contact contacts[8];
        int count;
        int next_index;
    public:
        // voir video pour l initialisation des variable count et index
        PhoneBook(void);
        ~PhoneBook(void);
        
        int get_count(void);
        void add_contact(const Contact& c);
        Contact& get_contact(int index);
};
#endif