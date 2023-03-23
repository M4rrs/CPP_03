#pragma once
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

#define SCAV "\033[33mSCAVTRAP \033[0m"

class ScavTrap : public ClapTrap {

	public:
		ScavTrap( void );
		ScavTrap( std::string name );

		ScavTrap ( const ScavTrap &copy );
		ScavTrap &operator=( const ScavTrap &assign );
		
		~ScavTrap( void );

		void guardGate();
		void attack( const std::string &target ); 
};

#endif