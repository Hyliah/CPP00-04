/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 18:42:42 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/15 15:51:00 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal{
	private :
		Brain* _brain;
	public :
		Cat();
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
		~Cat();

        void makeSound() const;
};

#endif