/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 20:02:33 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/27 14:57:35 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(int argc, char *argv[])
{   
    if (argc != 4)
    {
        std::cout << RED << "Format: 'filename' 's1' 's2'" << RESET << std::endl;
        return (0);
    }
    std::string infile = argv[1];
    std::string outfile = infile + ".remplace";
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string line;
    
    std::ifstream in(infile);
    if (!in.is_open())
    {
        std::cout << argv[1] << " failed to open" << std::endl;
        return (1);
    }
	
	if (in.peek() == EOF)
	{
		std::cout << RED << argv[1] << " is empty" << RESET << std::endl;
        return (1);
	}
	
    std::ofstream out(outfile);
    if (!out.is_open())
    {
        std::cout << RED << argv[1] << " failed to open" << RESET << std::endl;
        return (1);    
    }
    std::cout << BLUE << "new file '" << argv[1] << "' is created" << RESET << std::endl;
     
    while (std::getline(in, line))
    {
        std::size_t pos = 0;
        while ((pos = line.find(s1, pos)) < line.length())
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        out << line << std::endl;;
    }
    std::cout << GREEN << "All is done !" << RESET << std::endl;
	
    in.close();
    out.close();
    return (0);
}
