#include "ScavTrap.hpp"

int main( void )
{
	/*	Current stats
		HP = 100
		EP = 50
		ATTK = 20
	
		I can't be bothered to check exhaustion bcs theres too much ep
		It's inherited from claptrap, we'll assume it works.
	*/

	std::cout << "\n[ CONSTRUCTING ]" << std::endl;
	ScavTrap a;
	ScavTrap b("Bob");
	ClapTrap c("Clap");

	std::cout << "\n[ BASIC TEST ]" << std::endl;
	a.attack("Scav-bot");
	b.attack("Bob-bot");
	c.attack("Clap-bot");
	a.takeDamage(50);
	b.takeDamage(20);
	c.takeDamage(7); 

	a.beRepaired(20);

	std::cout << "\n[ TESTING COPIES ]" << std::endl;
	ScavTrap d(a);
	ClapTrap e(c);

	d.takeDamage(70); //should die
	e.takeDamage(7);
	std::cout << "[ END OF TEST COPIES ]\n" << std::endl;
	
	std::cout << "\n[ TESTING B ]" << std::endl;
	for (int i = 0; i < 4; i++)
		b.takeDamage(20); //should die;

	std::cout << "\n[ TESTING A ]" << std::endl;
	a.takeDamage(25);
	a.takeDamage(25);
	a.guardGate();
	
	std::cout << "\n[ DESTRUCTING ]" << std::endl;
}