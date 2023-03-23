#pragma once
#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap {
	public:
		DiamondTrap( void );
		DiamondTrap( std::string name );

		DiamondTrap( const DiamondTrap &copy );
		DiamondTrap &operator=( const DiamondTrap &assign );

		~DiamondTrap( void );

		void whoAmI( void );

};

#endif