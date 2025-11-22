/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 22:20:34 by hlichten          #+#    #+#             */
/*   Updated: 2025/11/14 15:01:46 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

Account::Account(int initial_deposit){

}

Account::~Account(void){
}

int	Account::getNbAccounts( void ){
	return (_nbAccounts);
}
int	Account::getTotalAmount( void ){
    return (_totalAmount);
}
int	Account::getNbDeposits( void ){
    return (_totalNbDeposits);
}
int	Account::getNbWithdrawals( void ){
    return (_totalNbWithdrawals);
}
void	Account::displayAccountsInfos( void ){
	std::cout << "index:" << 0 << ";amount:" << 42 << ";deposits:" << 0 <<";withdrawals:" << 0
}
void	makeDeposit( int deposit ){

}
bool	makeWithdrawal( int withdrawal ){

}
int		checkAmount( void ) const{

}
void	displayStatus( void ) const{
    
}