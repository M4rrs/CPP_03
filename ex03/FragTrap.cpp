#include "FragTrap.hpp"

/*=============== CONSTRUCTOR ===============*/

FragTrap::FragTrap( void ) : ClapTrap() {
	_hp = 101;
	_maxHP = _hp;
	_ep = 100;
	_attk = 30;
	std::cout << FRAG + _name + " constructed." << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name){
	_hp = 100;
	_maxHP = _hp;
	_ep = 100;
	_attk = 30;
	std::cout << FRAG + _name + " constructed." << std::endl;
}

/*=============== DESTRUCTOR ===============*/

FragTrap::~FragTrap( void ){
	std::cout << FRAG + _name + " destructed." << std::endl;
}

/*=============== COPY CONSTRUCTOR ===============*/

FragTrap::FragTrap( const FragTrap &copy ) : ClapTrap(copy) {
	*this = copy;
	std::cout << FRAG << "copy constructor called." << std::endl;
}

/*=============== OVERLOADED OPERATOR ===============*/

FragTrap &FragTrap::operator=( const FragTrap &assign ){
	this->_name = assign._name;
	this->_hp = assign._hp;
	this->_ep = assign._ep;
	this->_attk = assign._attk;

	return (*this);
}

/*=============== PUBLIC ===============*/

void FragTrap::attack( const std::string &target ){
	if (_ep == 0)
	{
		std::cout << FRAG + _name + " is too tired to attack..."
				<< std::endl;
	}
	if (_hp == 0)
		return ;
	std::cout << FRAG + _name + " attacks " + target + ", causing "
			<< _attk << " points of damage!"
			<< std::endl;
	--_ep;
}

void FragTrap::highFivesGuys( void ){
	std::cout << FRAG << "High fives guys !" << std::endl;
}

unsigned int FragTrap::getHP( void ) {
	std::cout << "Frag hp: " << _hp << std::endl;
	return (_hp);
}

int FragTrap::getATTK( void ) {
	std::cout << "Frag attk: " << _attk << std::endl;
	return (_attk);
}