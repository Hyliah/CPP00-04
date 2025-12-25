/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 22:20:34 by hlichten          #+#    #+#             */
/*   Updated: 2025/12/17 21:55:28 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

/*
Class Account that contain the logic and static variables
Account::t -> data of one account
Class with substructurs if I can say so
All accounts "Account::t" are manipulated by the Account class
*/


//initilisation of all static variables
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// constructors and destructors
Account::Account(int initial_deposit) : _amount(initial_deposit){
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _displayTimestamp();
    std::cout <<"index:" << _accountIndex << ";amount:" << _amount << ";created" <<std::endl;
}
Account::~Account(void){
    _nbAccounts--;
    _totalAmount -= _amount;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

// getters 
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

//19920104_091532
//[YYYYMMDD_HHMMSS]
void	Account::_displayTimestamp( void ){
    std::time_t now = std::time(NULL); //get now time
    std::tm* ltm = std::localtime(&now); // convert in a tm structure

    std::cout << "[" 
    << (1900 + ltm->tm_year)
    << std::setw(2) << std::setfill('0') << (1 + ltm->tm_mon)
    << std::setw(2) << std::setfill('0') << ltm->tm_mday
    << "_"
    << std::setw(2) << std::setfill('0') << ltm->tm_hour
    << std::setw(2) << std::setfill('0') << ltm->tm_min
    << std::setw(2) << std::setfill('0') << ltm->tm_sec
    << "] " ;
}

void	Account::displayAccountsInfos( void ){
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}
void	Account::makeDeposit( int deposit ){
    _nbDeposits++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit << ";amount:" << (_amount + deposit) << ";nb_deposits:" << _nbDeposits << std::endl;
    _amount += deposit;
    _totalAmount += deposit;
    _totalNbDeposits++;
}

// [19920104_091532] index:4;p_amount:1321;withdrawal:76;amount:1245;nb_withdrawals:1
// [19920104_091532] index:5;p_amount:23;withdrawal:refused
bool	Account::makeWithdrawal( int withdrawal ){
    if (_amount < withdrawal){
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
        return false;
    }
    _nbWithdrawals++;
    
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << withdrawal << ";amount:" << (_amount - withdrawal) << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    
    _totalNbWithdrawals++;
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    return true;
}
int		Account::checkAmount( void ) const{
	return _amount;
}
void	Account::displayStatus( void ) const{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits <<";withdrawals:" << _nbWithdrawals << std::endl;
}


//to make the diff : diff <(cut -c18- 19920104_091532.log) <(cut -c18- log_test.log)