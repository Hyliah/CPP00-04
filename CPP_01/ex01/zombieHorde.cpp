/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 16:54:17 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/20 15:40:41 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, const std::string& name)
{
	void* raw = ::operator new[](N * sizeof(Zombie));
	Zombie* horde = static_cast<Zombie*>(raw);

	for (int i = 0; i < N; i++)
		new (&horde[i]) Zombie(name + '_' + std::to_string(i));
	return (&horde[0]);
}
