/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:28:56 by hlichten          #+#    #+#             */
/*   Updated: 2025/10/30 21:07:37 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

class Contact {
	private:
		char	*FirstName;
		char	*LastName; 
		char	*nickname;
		int		PhoneNumber;
		char	*darkestSecret;
	public:
		Contact(void);
		~Contact(void);
};
#endif