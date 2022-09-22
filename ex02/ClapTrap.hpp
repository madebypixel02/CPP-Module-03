/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <aperez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:09:15 by aperez-b          #+#    #+#             */
/*   Updated: 2022/09/22 17:18:03 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP

# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
		std::string	_name;
		int			_hp;
		int			_energy_points;
		int			_damage;
	public:
		/* Constructors & Destructors */
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &copy);
		~ClapTrap(void);
		
		/* Main Member Functions */
		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		/* Getters & Setters */
		std::string	get_name(void);
		int			get_hp(void);
		int			get_energy_points(void);
		int			get_damage(void);
		void		set_name(std::string name);
		void		set_hp(int value);
		void		set_energy_points(int value);
		void		set_damage(int value);
};

#endif
