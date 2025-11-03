/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:05:58 by gcauchy           #+#    #+#             */
/*   Updated: 2025/11/03 13:38:38 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap (std::string name);
		FragTrap (const FragTrap& copy);
		FragTrap&	operator=(const FragTrap& other);
		~FragTrap ();
		
		void	highFivesGuys (void);
		static const int	default_hit_point = 50;
		static const int	default_attack_damage = 50;
};

#endif