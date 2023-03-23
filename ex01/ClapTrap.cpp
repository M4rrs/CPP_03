#include "ClapTrap.hpp"

/*=============== CONSTRUCTOR ===============*/

ClapTrap::ClapTrap( void ) : _name("nameless"), _hp(10), _ep(10), _attk(0) {
	std::cout << CLAP + _name + " constructed." << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hp(10), _ep(10), _attk(0) {
	std::cout << CLAP + _name + " constructed." << std::endl;
}

/*=============== DESTRUCTOR ===============*/

ClapTrap::~ClapTrap( void ) {
	std::cout << CLAP + _name + " destructed." << std::endl;
}

/*=============== COPY CONSTRUCTOR ===============*/

ClapTrap::ClapTrap( const ClapTrap &copy ){
	*this = copy;
	std::cout << CLAP << "copy constructor called." << std::endl;
}
/*=============== OVERLOADED OPERATOR ===============*/

ClapTrap &ClapTrap::operator=( const ClapTrap &assign ){
	this->_name = assign._name;
	this->_hp = assign._hp;
	this->_ep = assign._ep;
	this->_attk = assign._attk;

	return (*this);
}

/*=============== PUBLIC ===============*/

void ClapTrap::attack( const std::string &target ) {
	if (_ep == 0)
	{
		std::cout << CLAP + _name + " is too tired to attack...";
		return ;
	}
	if (_hp == 0)
		return;
	std::cout << CLAP + _name + " attacks " + target + ", causing "
			<< _attk << " points of damage!"
			<< std::endl;
	--_ep;
}

void ClapTrap::takeDamage( unsigned int amount ){
	if (_hp == 0)
		return ;
	std::cout << CLAP + _name + " takes "
			<< amount << " points of damage!"
			<< std::endl;
	if (amount >= _hp)
	{
		std::cout << CLAP + _name + " has been defeated."
				<< std::endl;
	}
	_hp -= amount;
}

void ClapTrap::beRepaired( unsigned int amount ){
	if (_ep == 0)
	{
		std::cout << CLAP + _name + " is too tired to heal..."
				<< std::endl;
		return ;
	}
	if (_hp == _maxHP)
	{
		std::cout << CLAP + _name + " is already at full health!"
				<< std::endl;
		return;
	}
	else if ((_hp + amount) >= _maxHP)
	{
		std::cout << CLAP + _name + " has been healed to full health!"
				<< std::endl;
		_hp = _maxHP;
	}
	else
	{
		std::cout << CLAP + _name + " is healing..."
				<< std::endl;
		_hp += amount;
	}
	--_ep;
}
