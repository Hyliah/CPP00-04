/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 21:40:52 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/11 22:21:55 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN

# include <iostream>

class Brain{
	protected :
		std::string _ideas[100];

	public :
		Brain();
		Brain(Brain &other);
		Brain& operator=(Brain& other);
		~Brain();
};
#endif