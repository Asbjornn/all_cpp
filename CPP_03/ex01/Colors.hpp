/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Colors.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcauchy <gcauchy@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:05:07 by gcauchy           #+#    #+#             */
/*   Updated: 2025/10/15 15:29:51 by gcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLORS_HPP
#define COLORS_HPP

// Reset
#define RESET       "\033[0m"

// Regular Colors
#define BLACK       "\033[0;30m"
#define RED         "\033[0;31m"
#define GREEN       "\033[0;32m"
#define YELLOW      "\033[38;2;255;255;0m"
#define BLUE        "\033[0;34m"
#define MAGENTA     "\033[0;35m"
#define CYAN        "\033[0;36m"
#define WHITE       "\033[0;37m"
#define ORANGE		"\033[38;2;255;128;0m"

// Bold
#define BBLACK      "\033[1;30m"
#define BRED        "\033[1;31m"
#define BGREEN      "\033[1;32m"
#define BYELLOW     "\033[1;33m"
#define BBLUE       "\033[1;34m"
#define BMAGENTA    "\033[1;35m"
#define BCYAN       "\033[1;36m"
#define BWHITE      "\033[1;37m"

// Underline
#define UBLACK      "\033[4;30m"
#define URED        "\033[4;31m"
#define UGREEN      "\033[4;32m"
#define UYELLOW     "\033[4;33m"
#define UBLUE       "\033[4;34m"
#define UMAGENTA    "\033[4;35m"
#define UCYAN       "\033[4;36m"
#define UWHITE      "\033[4;37m"

#define BLINK		"\033[5m"

#endif