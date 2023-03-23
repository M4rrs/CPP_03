#include "DiamondTrap.hpp"
/*=============== CONSTRUCTOR ===============*/

DiamondTrap::DiamondTrap( void ) : ClapTrap("nameless_clap_name"), _name("nameless") {
	std::cout << DIA << _name + " constructed." << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), _name(name){
	std::cout << DIA + _name + " constructed." << std::endl;
}

/*=============== DESTRUCTOR ===============*/

DiamondTrap::~DiamondTrap( void ){
	std::cout << DIA << _name + " destructed." << std::endl;
}

/*=============== COPY CONSTRUCTOR ===============*/

DiamondTrap::DiamondTrap( const DiamondTrap &copy ) : ClapTrap(copy) {
	*this = copy;
}

/*=============== OVERLOADED OPERATOR ===============*/

DiamondTrap &DiamondTrap::operator=( const DiamondTrap &assign ) {
	
}