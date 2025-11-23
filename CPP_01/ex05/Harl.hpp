/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 21:41:53 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/22 22:20:21 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <iostream>

class Harl{
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );

	public:
		Harl(void);
		~Harl(void);

		void	complain( std::string level );
};

#endif