#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
	std::cout << "\n[ CONSTRUCTING: ClapTrap, ScavTrap, and FragTrap ]" << std::endl;
	ClapTrap a("Clap");
	ScavTrap b("Scav");
	FragTrap c("Frag");

	std::cout << "\n[ BASIC TEST ]" << std::endl;
	a.attack("Clap-bot");
	b.attack("Scav-bot");
	c.attack("Frag-bot");

	std::cout << std::endl;
	a.takeDamage(5); //claptrap max 10 hp
	b.takeDamage(20); //scavtrap max 100
	c.takeDamage(70); //fragtrap max 100

	std::cout << std::endl;
	a.beRepaired(3);
	b.beRepaired(20); //heals to max
	c.beRepaired(10);

	std::cout << "\n[ TESTING COPIES ]" << std::endl;
	ClapTrap d(a); //7hp
	ScavTrap e(b); //full
	FragTrap f(c); //40hp

	std::cout << std::endl;
	d.takeDamage(7); //should die
	e.takeDamage(100); //dies
	f.takeDamage(20); //does not die
	std::cout << "[ END OF TEST COPIES ]" << std::endl;
	
	std::cout << "\n[ TESTING A ]" << std::endl;
	for (int i = 0; i < 4; i++)
		a.takeDamage(2); //should die;

	std::cout << "\n[ TESTING B, guardGate ]" << std::endl;
	b.takeDamage(25);
	b.takeDamage(25);
	b.guardGate();

	std::cout << "\n[ TESTING C, highFivesGuys ]" << std::endl;
	c.highFivesGuys();
	
	std::cout << "\n[ DESTRUCTING ]" << std::endl;
}