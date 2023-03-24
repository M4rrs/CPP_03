#include "ScavTrap.hpp"

/*=============== CONSTRUCTOR ===============*/

ScavTrap::ScavTrap( void ) : ClapTrap() {
	_hp = 100;
	_maxHP = _hp;
	_ep = 50;
	_attk = 20;
	std::cout << SCAV + _name + " constructed." << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name){
	_hp = 100;
	_maxHP = _hp;
	_ep = 50;
	_attk = 20;
	std::cout << SCAV + _name + " constructed." << std::endl;
}

/*=============== DESTRUCTOR ===============*/

ScavTrap::~ScavTrap( void ){
	std::cout << SCAV + _name + " destructed." << std::endl;
}

/*=============== COPY CONSTRUCTOR ===============*/

ScavTrap::ScavTrap( const ScavTrap &copy ) : ClapTrap(copy) {
	*this = copy;
	std::cout << SCAV << "copy constructor called." << std::endl;
}

/*=============== OVERLOADED OPERATOR ===============*/

ScavTrap &ScavTrap::operator=( const ScavTrap &assign ){
	this->_name = assign._name;
	this->_hp = assign._hp;
	this->_ep = assign._ep;
	this->_attk = assign._attk;

	return (*this);
}

/*=============== PUBLIC ===============*/

void	ScavTrap::guardGate( void ) {
	std::cout << SCAV + _name + " is now in Gatekeeper mode."
			<< std::endl;
}

void ScavTrap::attack( const std::string &target ){
	if (_ep == 0)
	{
		std::cout << SCAV + _name + " is too tired to attack..."
				<< std::endl;
	}
	if (_hp == 0)
		return ;
	std::cout << SCAV + _name + " attacks " + target + ", causing "
			<< _attk << " points of damage!"
			<< std::endl;
	--_ep;
}
