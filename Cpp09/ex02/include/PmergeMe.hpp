/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:50:54 by macarval          #+#    #+#             */
/*   Updated: 2024/05/16 16:51:24 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>

// Color codes as global variables
const std::string RESET = "\033[0m";
const std::string RED = "\033[31;1m";
const std::string GREEN = "\033[32;1m";
const std::string YELLOW = "\033[33;1m";
const std::string BLUE = "\033[34;1m";
const std::string PURPLE = "\033[35;1m";
const std::string CYAN = "\033[36;1m";
const std::string GRAY = "\033[37;1m";

class PmergeMe
{
	private:

	public:
	// Constructor & Destructor ===============================================
		PmergeMe( void );
		~PmergeMe( void );
	// Exceptions =============================================================

	// ========================================================================
		PmergeMe( PmergeMe const &copy );

	// Operators ==============================================================
		PmergeMe& operator=( PmergeMe const &other );

	// Getters ================================================================

	// Setters ================================================================

	// Methods ================================================================

};

#endif
