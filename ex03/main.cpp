#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	a("Woody");
	FragTrap	b("Buzz");

	for (int i = 0; i < 10; i++)
	{
		a.attack("Johny");
		a.takeDamage(50);
		a.beRepaired(30);
		a.highFivesGuys();
	}

	std::cout << std::endl << std::endl;
	FragTrap	c(a);
	for (int i = 0; i < 10; i++)
	{
		c.attack("Johny");
		c.takeDamage(50);
		c.beRepaired(30);
		c.highFivesGuys();
	}

	std::cout << std::endl << std::endl;
	a = b;
	for (int i = 0; i < 10; i++)
	{
		a.attack("Johny");
		a.takeDamage(50);
		a.beRepaired(30);
		a.highFivesGuys();
	}

	return 0;
}