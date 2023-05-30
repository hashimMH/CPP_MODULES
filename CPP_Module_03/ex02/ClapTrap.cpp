/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 19:51:14 by hmohamed          #+#    #+#             */
/*   Updated: 2023/05/30 19:55:16 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	Name = "";
	HitPoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
	std::cout << "ClapTrap default constructor called" << std::endl;
};

ClapTrap::ClapTrap(std::string nm): Name(nm)
{
	HitPoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
	std::cout << "ClapTrap constructor called" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap& cp)
{
	Name = cp.Name;
	HitPoints = cp.HitPoints;
	EnergyPoints = cp.EnergyPoints;
	AttackDamage = cp.AttackDamage;
};
ClapTrap& ClapTrap::operator=(const ClapTrap& cp)
{
	if(this != &cp)
	{
		Name = cp.Name;
		HitPoints = cp.HitPoints;
		EnergyPoints = cp.EnergyPoints;
		AttackDamage = cp.AttackDamage;
	}
	return (*this);
};

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
};

void ClapTrap::attack(const std::string& target)
{
	if(EnergyPoints > 0 && HitPoints > 0)
	{
		std::cout << "ClapTrap "<< Name << " attacks " << target <<", causing " << AttackDamage <<" points of damage!"<<std::endl;
		EnergyPoints--;
	}
};

void ClapTrap::takeDamage(unsigned int amount)
{
	if(HitPoints > 0)
	{
		std::cout << "ClapTrap "<< Name << " pre point " << HitPoints ;
		HitPoints = HitPoints - amount;
		std::cout << " take damage " << amount <<" hit points! and new hit points are "<< HitPoints <<std::endl;
	}
};

void ClapTrap::beRepaired(unsigned int amount)
{
	if(EnergyPoints > 0 && HitPoints > 0)
	{
		std::cout << "ClapTrap "<< Name << " pre point " << HitPoints ;
		HitPoints += amount; 
		std::cout <<" repairing " << amount <<" hit points! and new hit points are "<< HitPoints <<std::endl;
	}
};
