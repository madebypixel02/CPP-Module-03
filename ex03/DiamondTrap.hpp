/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <aperez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:04:48 by aperez-b          #+#    #+#             */
/*   Updated: 2022/09/23 14:43:08 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string	_name;
	public:
		/* Constructors & Destructors */
		DiamondTrap(void);
		DiamondTrap(std::string const &name);
		DiamondTrap(DiamondTrap const &copy);
		~DiamondTrap(void);

		/* Basic Operators */
		DiamondTrap	&operator=(DiamondTrap const &copy);

		/* Main Member Functions */
		void	whoAmI(void);
		void	attack(std::string const &target);

		/* Getters & Setters */
		std::string const	&get_name(void);
		void				set_name(std::string const &name);
};
