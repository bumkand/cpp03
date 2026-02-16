#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	a("Woody");
	DiamondTrap	b("Buzz");

	for (int i = 0; i < 10; i++)
	{
		a.attack("Johny");
		a.takeDamage(50);
		a.beRepaired(30);
		a.highFivesGuys();
		a.whoAmI();
		std::cout << std::endl;
	}

	std::cout << "___________________________________" << std::endl << std::endl;
	DiamondTrap	c(a);
	for (int i = 0; i < 10; i++)
	{
		c.attack("Johny");
		c.takeDamage(50);
		c.beRepaired(30);
		c.highFivesGuys();
		a.whoAmI();
		std::cout << std::endl;
	}

	std::cout << "___________________________________" << std::endl << std::endl;
	a = b;
	for (int i = 0; i < 10; i++)
	{
		a.attack("Johny");
		a.takeDamage(50);
		a.beRepaired(30);
		a.highFivesGuys();
		a.whoAmI();
		std::cout << std::endl;
	}

	return 0;
}