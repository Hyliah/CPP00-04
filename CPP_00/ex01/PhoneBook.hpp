/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:16:36 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/05 00:18:16 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include "Contact.hpp"

class PhoneBook {
    private :
        Contact contacts[8];
    public:
        PhoneBook(void);
        ~PhoneBook(void);

        Contact& get_contact(int index);
};
#endif