#pragma once
#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

#define DIA "\033[32mDIAMONDTRAP \033[0m"

class	DiamondTrap : public ClapTrap, public ScavTrap, public FragTrap {
	private:
		std::string _name;
		
	public:
		DiamondTrap( void );
		DiamondTrap( std::string name );

		DiamondTrap( const DiamondTrap &copy );
		DiamondTrap &operator=( const DiamondTrap &assign );

		~DiamondTrap( void );

		void whoAmI( void );

};

#endif