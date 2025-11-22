/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 16:54:26 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/20 16:00:25 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

static void	destroy_horde(Zombie* horde, int N);

int main ()
{
	int N = 5;
	Zombie *horde;
	horde = zombieHorde(N, "bobby");
	destroy_horde(horde, N);
}

static void	destroy_horde(Zombie* horde, int N)
{
	for (int i = 0; i < N; ++i)
		horde[i].~Zombie();

	::operator delete[](horde);
}