/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 15:01:05 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/28 19:02:57 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class AMateria;
#include <iostream>
#include "ICharacter.hpp"

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

typedef struct s_floor
{
	struct s_floor* head;
	int		index;
}				t_floor;

typedef struct s_item
{
	AMateria*			materia;
	struct s_item*		next;
}				t_item;

// container and user of Materia
class Character : public ICharacter {

	private :
		std::string	_name;
		AMateria*	_inventory[4];
		t_floor*	_floor;
		
	public :
		Character();
		Character(const std::string& name);
		Character(const Character& other);
		Character& operator=(const Character& other);
		~Character();

		const std::string& getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

t_floor* create_floor();
t_item* create_item(t_floor* floor, AMateria* m);
void	delete_floor(t_floor* floor);

#endif
