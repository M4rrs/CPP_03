#include "DiamondTrap.hpp"
/*=============== CONSTRUCTOR ===============*/

DiamondTrap::DiamondTrap( void ) : ClapTrap("nameless_clap_name"), _name("nameless") {
	this->_hp = 100;
	this->_maxHP = _hp;
	this->_ep = 50;
	this->_attk = 30;

	std::cout << DIA << _name + " constructed." << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), _name(name){
	this->_hp = 100;
	this->_maxHP = _hp;
	this->_ep = 50;
	this->_attk = 30;
	std::cout << DIA + _name + " constructed." << std::endl;
}

/*=============== DESTRUCTOR ===============*/

DiamondTrap::~DiamondTrap( void ){
	std::cout << DIA << _name + " destructed." << std::endl;
}

/*=============== COPY CONSTRUCTOR ===============*/

DiamondTrap::DiamondTrap( const DiamondTrap &copy ) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy) {
	*this = copy;
}

/*=============== OVERLOADED OPERATOR ===============*/

DiamondTrap &DiamondTrap::operator=( const DiamondTrap &assign ){
	ClapTrap::_name = assign._name + "_clap_name";
	this->_name = assign._name;
	this->_hp = assign._hp;
	this->_ep = assign._ep;
	this->_attk = assign._attk;

	return (*this);
}

/*=============== PUBLIC ===============*/

void DiamondTrap::attack( const std::string &target ){
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI( void ){
	std::cout << "I am " << DIA + _name + " of "  << CLAP + ClapTrap::_name + "."
			<< std::endl;
}
