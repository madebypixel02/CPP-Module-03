/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <aperez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:37:20 by aperez-b          #+#    #+#             */
/*   Updated: 2022/09/23 14:33:00 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP

# define FRAGTRAP_HPP

# include "ScavTrap.hpp"

class FragTrap: public virtual ClapTrap
{
	public:
		/* Constructors & Destructors */
		FragTrap(void);
		FragTrap(std::string const &name);
		FragTrap(FragTrap const &copy);
		~FragTrap(void);

		/* Basic Operators */
		FragTrap	&operator=(FragTrap const &copy);

		/* Main Member Functions */
		void	highFivesGuys(void);
};

#endif
