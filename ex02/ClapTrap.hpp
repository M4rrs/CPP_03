#pragma once
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#define CLAP "\033[34mCLAPTRAP \033[0m"

class ClapTrap {

	protected:
		std::string _name;
		unsigned int	_maxHP;
		unsigned int	_hp;
		unsigned int _ep;
		int _attk;

	public:
		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap &copy );
		ClapTrap &operator=( const ClapTrap &assign );
		~ClapTrap();

		void attack( const std::string &target ); 
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );


};

#endif
