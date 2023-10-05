/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <eabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:02:36 by eabdelha          #+#    #+#             */
/*   Updated: 2022/08/17 16:58:00 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void)
{
    time_t now = time(0);
    tm *_tm = localtime(&now);
    std::cout << std::setfill('0') << "[" << (_tm->tm_year + 1900)
       << std::setw(2) << _tm->tm_mon + 1
       << std::setw(2) << _tm->tm_mday << "_"
       << std::setw(2) << _tm->tm_hour
       << std::setw(2) << _tm->tm_min
       << std::setw(2) << _tm->tm_sec << "] ";
}

Account::Account(int initial_deposit) : _amount(initial_deposit)
{
	_nbDeposits = 0;
	_nbWithdrawals = 0;
    _displayTimestamp();
    _accountIndex = _nbAccounts++;
    _totalAmount += _amount;
    std::cout << "index:" << _accountIndex << ";amount:" 
    << initial_deposit << ";created" << std::endl;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" 
    << _amount << ";closed" << std::endl;
}

void	Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount 
    << ";deposits:" << _totalNbDeposits << ";withdrawals:" 
    << _totalNbWithdrawals << std::endl;
}

void	Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount 
    << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    if (deposit)
        _nbDeposits++;
    Account::_totalNbDeposits += _nbDeposits;
    Account::_totalAmount += deposit;
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount 
    << ";deposit:" << deposit;
    _amount += deposit;
    std::cout << ";amount:" << _amount << ";nb_deposits:"
    << _nbDeposits << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal)
{
     _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
    if (_amount < withdrawal)
    {
        std::cout << "refused" << std::endl;
        return (1);
    }
    if (withdrawal)
        _nbWithdrawals++;
    _amount -= withdrawal;
    Account::_totalNbWithdrawals += _nbWithdrawals;
    Account::_totalAmount -= withdrawal;
    std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:"
    << _nbWithdrawals << std::endl;
    return (0);
}
