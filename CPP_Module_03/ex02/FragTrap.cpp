/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 21:20:16 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/29 21:24:01 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap(std::string nm)
{
	this->Name = nm;
	this->EnergyPoints = 100;
	this->HitPoints = 100;
	this->AttackDamage = 30;
	std::cout << "FragTrap constructor called" << std::endl;
};
FragTrap::FragTrap(const FragTrap& cp)
{
	this->Name = cp.Name;
	this->HitPoints = cp.HitPoints;
	this->EnergyPoints = cp.EnergyPoints;
	this->AttackDamage = cp.AttackDamage;
};
FragTrap& FragTrap::operator=(const FragTrap& cp)
{
	if(this != &cp)
	{
		this->Name = cp.Name;
		this->HitPoints = cp.HitPoints;
		this->EnergyPoints = cp.EnergyPoints;
		this->AttackDamage = cp.AttackDamage;
	}
	return (*this);
};

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
};

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->Name << " high Fives Guys." << std::endl;
};

void FragTrap::attack(const std::string& target)
{
	if(this->EnergyPoints > 0 && this->HitPoints > 0)
	{
		std::cout << "FragTrap "<< this->Name << " attacks " << target <<", causing " << this->AttackDamage <<" points of damage!"<<std::endl;
		this->EnergyPoints--;
	}
};