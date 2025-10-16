/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:53:51 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/16 10:53:45 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "iostream"
#include "Colors.hpp"
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap (std::string name);
		ScavTrap (const ScavTrap& copy);
		~ScavTrap ();
		void	attack(const std::string& target) override;
		void	guardGate ();
};

#endif