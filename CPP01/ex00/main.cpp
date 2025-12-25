/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:25:32 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/14 16:52:41 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    //HEAP declared first + destroyed last
    Zombie* NewZ = newZombie("bob");
    //STACK declared and destroyed is the same time
    randomChump("bobby");
    //HEAP declared last + destroyed second last
    Zombie* NewY = newZombie("bobo");
    delete NewY;
    delete NewZ;
}
