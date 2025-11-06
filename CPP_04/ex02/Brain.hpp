/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:29:53 by gcauchy           #+#    #+#             */
/*   Updated: 2025/11/06 12:12:11 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>


class Brain {
    public:
        Brain();
        Brain(const Brain& copy);
        Brain& operator=(const Brain& other);
        ~Brain();

		void	setIdea(std::string const & idea, int id);
		std::string	getIdea(int id);
    
    private:
        std::string ideas[100];
};


#endif