#pragma once
#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

#define DIA "\033[32mDIAMONDTRAP \033[0m"

class	DiamondTrap : public FragTrap, public ScavTrap {
	private:
		std::string _name;
		
	public:
		DiamondTrap( void );
		DiamondTrap( std::string name );

		DiamondTrap( const DiamondTrap &copy );
		DiamondTrap &operator=( const DiamondTrap &assign );

		~DiamondTrap( void );

		void attack( const std::string &target ); 
		void whoAmI( void );

};

#endif