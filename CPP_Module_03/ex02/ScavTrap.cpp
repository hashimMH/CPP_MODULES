/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:06:41 by hmohamed          #+#    #+#             */
/*   Updated: 2023/06/04 19:04:51 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->Name = "";
	this->EnergyPoints = 50;
	this->HitPoints = 100;
	this->AttackDamage = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
};

ScavTrap::ScavTrap(std::string nm)
{
	this->Name = nm;
	this->EnergyPoints = 50;
	this->HitPoints = 100;
	this->AttackDamage = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
};
ScavTrap::ScavTrap(const ScavTrap& cp):ClapTrap(cp)
{
	this->Name = cp.Name;
	this->HitPoints = cp.HitPoints;
	this->EnergyPoints = cp.EnergyPoints;
	this->AttackDamage = cp.AttackDamage;
};
ScavTrap& ScavTrap::operator=(const ScavTrap& cp)
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

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
};

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->Name << " is now in Gate keeper mode." << std::endl;
};

void ScavTrap::attack(const std::string& target)
{
	if(this->EnergyPoints > 0 && this->HitPoints > 0)
	{
		std::cout << "ScavTrap "<< this->Name << " attacks " << target <<", causing " << this->AttackDamage <<" points of damage!"<<std::endl;
		this->EnergyPoints--;
	}
};