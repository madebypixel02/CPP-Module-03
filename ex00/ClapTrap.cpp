/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <aperez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:14:48 by aperez-b          #+#    #+#             */
/*   Updated: 2022/09/22 17:20:51 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("default"), _hp(10), _energy_points(10), _damage(0)
{
	std::cout << "ClapTrap " << this->_name << " created with default constructor." << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hp(10), _energy_points(10), _damage(0)
{
	std::cout << "ClapTrap " << this->_name << " created." << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_name << " destroyed." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	std::cout << "ClapTrap " << this->_name << " copied." << std::endl;
	*this = copy;
}

void	ClapTrap::attack(std::string const &target)
{
	if (this->_energy_points && this->_hp > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacked " << target << ", causing " << this->_damage << " point(s) of damage!" << std::endl;
		this->_energy_points--;
	}
	if (this->_hp <= 0)
		std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
	else if (!this->_energy_points)
		std::cout << "ClapTrap " << this->_name << " is out of energy points!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp > 0)
	{
		std::cout << "ClapTrap " << this->_name << " took " << amount << " point(s) of damage!" << std::endl;
		this->_hp -= amount;
	}
	else
		std::cout << "STOP! ClapTrap " << this->_name << " is already dead :(" << std::endl;
	if (this->_hp < 0)
		this->_hp = 0;

}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hp > 0 && this->_energy_points)
	{
		std::cout << "ClapTrap " << this->_name << " healed " << amount << " point(s)." << std::endl;
		this->_hp += amount;
		this->_energy_points--;
	}
	if (this->_hp <= 0)
		std::cout << "Cannot repair because: ClapTrap " << this->_name << " is dead." << std::endl;
	else if (!this->_energy_points)
		std::cout << "ClapTrap " << this->_name << " is out of energy points!" << std::endl;
}

std::string	ClapTrap::get_name(void)
{
	return (this->_name);
}

int	ClapTrap::get_hp(void)
{
	return (this->_hp);
}

int	ClapTrap::get_energy_points(void)
{
	return (this->_energy_points);
}

int	ClapTrap::get_damage(void)
{
	return (this->_damage);
}

void	ClapTrap::set_name(std::string name)
{
	this->_name = name;
}

void	ClapTrap::set_hp(int value)
{
	this->_hp = value;
}

void	ClapTrap::set_energy_points(int value)
{
	this->_energy_points = value;
}

void	ClapTrap::set_damage(int value)
{
	this->_damage = value;
}