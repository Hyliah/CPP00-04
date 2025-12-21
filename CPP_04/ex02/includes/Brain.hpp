/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 21:40:52 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/15 16:28:11 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

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