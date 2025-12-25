/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 18:42:42 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/11 21:09:05 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H
# include "Animal.hpp"

class Cat : public Animal{
	public :
		Cat();
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
		~Cat();

        void makeSound() const;
};

#endif