#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	a("Woody");

	for (int i = 0; i < 10; i++)
	{
		a.attack("Johny");
		a.takeDamage(50);
		a.beRepaired(30);
		a.guardGate();
	}



	return 0;
}