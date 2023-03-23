#pragma once
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#define FRAG "\033[35mFRAGTRAP \033[0m"

class FragTrap : virtual public ClapTrap {
	public:
	FragTrap( void );
	FragTrap( std::string name );

	FragTrap( const FragTrap &copy );
	FragTrap &operator=( const FragTrap &assign );

	~FragTrap( void );

	void highFivesGuys(void);
	void attack( const std::string &target );
};

#endif