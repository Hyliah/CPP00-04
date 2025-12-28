/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 18:07:02 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/28 19:16:35 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#ifndef ICE_HPP
# define ICE_HPP

class Ice : public AMateria {
    public :
        Ice();
        Ice(const Ice& other);
        Ice& operator=(const Ice& other);
        ~Ice();

        AMateria* clone() const;
        void use(ICharacter& target);
};
#endif
