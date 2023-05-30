/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:07:21 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/30 19:42:30 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap()
{
	ClapTrap::Name = "";
	this->Name = "";
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->HitPoints = FragTrap::HitPoints;
	this->AttackDamage = FragTrap::AttackDamage;
	std::cout << "DiamondTrap constructor called" << std::endl;
};


DiamondTrap::DiamondTrap(std::string nm)
{
	ClapTrap::Name = nm + "_clap_name";
	this->Name = nm;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->HitPoints = FragTrap::HitPoints;
	this->AttackDamage =  FragTrap::AttackDamage;
	std::cout << "DiamondTrap constructor called" << std::endl;
};

DiamondTrap::DiamondTrap(const DiamondTrap& cp)
{
	if(cp.Name.empty() != true)
		ClapTrap::Name = cp.Name + "_clap_name";
	this->Name = cp.Name;
	this->EnergyPoints = cp.ScavTrap::EnergyPoints;
	this->HitPoints = cp.FragTrap::HitPoints;
	this->AttackDamage = cp.FragTrap::AttackDamage;
};
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& cp)
{
	if(this != &cp)
	{
		ClapTrap::Name = cp.Name + "_clap_name";
		this->Name = cp.Name;
		this->EnergyPoints = cp.ScavTrap::EnergyPoints;
		this->HitPoints = cp.FragTrap::HitPoints;
		this->AttackDamage = cp.FragTrap::AttackDamage;
	}
	return (*this);
};

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
};

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap " << this->Name << " ClapTrap name is: " << ClapTrap::Name << std::endl;
};

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
};