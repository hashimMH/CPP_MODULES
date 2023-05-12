/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:02:02 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/12 22:25:45 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_amount = initial_deposit;
	_totalAmount += initial_deposit; 
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_displayTimestamp();
	std::cout << "index:"<< _accountIndex << ";amount:" << _amount << ";created" << std::endl;
};

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:"<< _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
};

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
};

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
};

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
};

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
};

void	Account::_displayTimestamp( void )
{
    std::time_t time = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    std::tm* localTime = std::localtime(&time);
    
    char timestamp[20];
    std::strftime(timestamp, sizeof(timestamp), "%Y%m%d_%H%M%S", localTime);
    std::cout << "[" << timestamp << "] ";
};

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:"<< _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals  << std::endl;
};

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:"<< _accountIndex << ";p_amount:" << _amount << ";deposits:" << deposit;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << ";amount:"<< _amount << ";nb_deposits:"<< _nbDeposits <<std::endl;
};

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:"<< _accountIndex << ";p_amount:" << _amount << ";withdrawal:" ;
	if (withdrawal > _amount)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << withdrawal << ";amount:"<< _amount << ";nb_withdrawals:"<< _nbWithdrawals <<std::endl;
	return(true);
};

int		Account::checkAmount( void ) const
{
	return(_amount);
};

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:"<< _accountIndex << ";amount:" << _amount << ";deposits:" <<  _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
};