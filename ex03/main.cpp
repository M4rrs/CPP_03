#include "DiamondTrap.hpp"
#include <iostream>

int main( void )
{
	std::cout << "\n[ CONSTRUCTING: ClapTrap, ScavTrap, and FragTrap ]" << std::endl;
	ClapTrap a("Clap");
	ScavTrap b("Scav");
	FragTrap c("Frag");
	DiamondTrap d ("Diamond");

	std::cout << "\n[ BASIC TEST ]" << std::endl;
	a.attack("Clap-bot");
	b.attack("Scav-bot");
	c.attack("Frag-bot");
	d.attack("Diamond-bot");

	std::cout << std::endl;
	a.takeDamage(5); //claptrap max 10 hp
	b.takeDamage(20); //scavtrap max 100
	c.takeDamage(70); //fragtrap max 100
	d.takeDamage(70); //fragtrap max 100
 
	std::cout << std::endl;
	a.beRepaired(3); //8
	b.beRepaired(20); //heals to max
	c.beRepaired(10); //40
	d.beRepaired(30); //60

	std::cout << "\n[ TESTING COPIES ]" << std::endl;
	ClapTrap e(a); //8hp
	ScavTrap f(b); //full
	FragTrap g(c); //40hp
	DiamondTrap h(d); //60hp

	std::cout << std::endl;
	e.takeDamage(8); //should die
	f.takeDamage(100); //dies
	g.takeDamage(20); //does not die
	h.takeDamage(59); //dies
	h.takeDamage(1); //dies
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
	
	std::cout << "\n[ TESTING D, whoAmI ]" << std::endl;
	d.whoAmI();

	std::cout << "\n[ DESTRUCTING ]" << std::endl;

}