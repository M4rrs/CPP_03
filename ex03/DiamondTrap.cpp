#include "DiamondTrap.hpp"
/*=============== CONSTRUCTOR ===============*/

DiamondTrap::DiamondTrap( void ) : ClapTrap("nameless_clap_name"), _name("nameless") {
	this->_hp = FragTrap::_hp;
	this->_maxHP = _hp;
	this->_ep = ScavTrap::_ep;
	this->_attk = FragTrap::_attk;

	std::cout << "Diamond ATTK = " << DiamondTrap::_attk << std::endl;
	std::cout << "Diamond EP = " << DiamondTrap::_ep << std::endl;
	std::cout << "Diamond HP = " << DiamondTrap::_ep << std::endl;
	std::cout << "HP: " << _hp << "\nEP: " << _ep << "\nATTK: " << _attk << std::endl;
	std::cout << DIA << _name + " constructed." << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), _name(name){
	_hp = FragTrap::_hp;
	_maxHP = _hp;
	_ep = ScavTrap::_ep;
	_attk = FragTrap::_attk;
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
	std::cout << "I am DiamondTrap " + _name + " of ClapTrap " + ClapTrap::_name + "."
			<< std::endl;
}
