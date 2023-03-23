#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : _name("nameless"), FragTrap("nameless_clap_name"), ScavTrap("nameless_clap_name"){
	_hp = FragTrap::_hp;
	std::cout << DIA << _name + " constructed." << std::endl;
}

// DiamondTrap::DiamondTrap( std::string name ) : _name(name), ClapTrap(name + "_clap_name"){

// }

DiamondTrap::~DiamondTrap( void ){
	std::cout << DIA << _name + " destructed." << std::endl;
}