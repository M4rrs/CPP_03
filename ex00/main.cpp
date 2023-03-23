#include "ClapTrap.hpp"

int main( void )
{
	std::cout << "\n[ CONSTRUCTING ]" << std::endl;
	ClapTrap a;
	ClapTrap b("Bob");

	std::cout << "\n[ BASIC TEST ]" << std::endl;
	a.attack("Enemy-1");
	b.attack("Enemy-2");
	a.takeDamage(5);
	b.takeDamage(2);

	a.beRepaired(2);

	std::cout << "\n[ TESTING C, COPY OF A ]" << std::endl;
	ClapTrap c(a);
	c.takeDamage(7); //should die
	std::cout << "[ END OF TEST C ]\n" << std::endl;

	std::cout << "\n[ TESTING A | Should run out of energy ]" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		a.attack("Big Enemy");
		a.beRepaired(1);	
	}
	// should be exhausted, ep will not reduce if repair is called when already at full health
	
	std::cout << "\n[ TESTING B ]" << std::endl;
	for (int i = 0; i < 4; i++)
		b.takeDamage(2); //should die;

	std::cout << "\n[ DESTRUCTING ]" << std::endl;
}