/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:16:36 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/11 21:28:43 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include "Contact.hpp"

class PhoneBook {
    private :
        Contact _Contacts[8];
        int _Count;
        int _NextIndex;
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        
        int get_count(void);
        void add_contact(const Contact& c);
        Contact& get_contact(int index);
};
#endif