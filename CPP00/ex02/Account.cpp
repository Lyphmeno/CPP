/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:14:06 by hlevi             #+#    #+#             */
/*   Updated: 2022/06/02 14:55:11 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_totalAmount = getTotalAmount() + initial_deposit;
	_nbAccounts = getNbAccounts() + 1;
	this->_amount = initial_deposit;
	this->_accountIndex = _nbAccounts - 1;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex 
		<< ";amount:" << this->_amount 
		<< ";created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex 
		<< ";amount:" << this->_amount 
		<< ";closed" << std::endl;
}

void	Account::_displayTimestamp( void )
{
    time_t	actualTime;
    tm		*localTime;

    actualTime = time(0);
    localTime = localtime(&actualTime);
	std::cout << "[" << localTime->tm_year
		<< std::setw(2) << std::setfill('0') << localTime->tm_mon 
		<< std::setw(2) << std::setfill('0') << localTime->tm_mday << "_"
		<< std::setw(2) << std::setfill('0') << localTime->tm_hour 
		<< std::setw(2) << std::setfill('0') << localTime->tm_min
		<< std::setw(2) << std::setfill('0') << localTime->tm_sec << "]";
}

int Account::checkAmount(void) const
{
	return (this->_amount);
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts() 
		<< ";total:" << getTotalAmount() 
		<< ";deposits:" << getNbDeposits()
		<< ";widthdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex 
		<< ";amount:" << this->_amount 
		<< ";deposits:" << this->_nbDeposits
		<< ";widthdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalAmount = getTotalAmount() + deposit;
	_totalNbDeposits++;
	std::cout << " index:" << this->_accountIndex 
		<< ";p_amount:" << this->_amount - deposit 
		<< ";deposit:" << deposit 
		<< ";amount:" << this->_amount
		<< ";nb_deposits;" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	if (this->_amount - withdrawal < 0)
	{
		std::cout << " index:" << this->_accountIndex
                << ";p_amount:" << this->_amount
                << ";withdrawal:" << withdrawal 
				<< "refused" << std::endl;
		return (false);
	}
	this->_amount += withdrawal;
	this->_nbWithdrawals++;
	_totalAmount = getTotalAmount() - withdrawal;
	_totalNbWithdrawals++;
	std::cout << " index:" << this->_accountIndex
                << ";p_amount:" << this->_amount
                << ";withdrawal:" << withdrawal 
                << ";amount:" << this->_amount
				<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}
