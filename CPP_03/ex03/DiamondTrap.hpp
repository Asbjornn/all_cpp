/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:32:53 by gcauchy           #+#    #+#             */
/*   Updated: 2025/11/04 17:23:16 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	public:
		DiamondTrap ();
		DiamondTrap (std::string name);
		DiamondTrap (const DiamondTrap& copy);
		DiamondTrap& operator=(const DiamondTrap& other);
		~DiamondTrap();
		
		void	whoAmI();

	private:
		std::string name;
};

#endif