#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("Woody");
	ClapTrap	b("Buzz");

	for (int i = 0; i < 10; i++)
	{
		a.attack("Johny");
		a.beRepaired(5);
	}
	for (int i = 0; i < 10; i++)
	{
		a.attack("Johny");
		a.takeDamage(10);
	}


	return 0;
}