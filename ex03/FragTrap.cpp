#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) :
	ClapTrap(name)
{
	std::cout << "FragTrap default constructor called" << std::endl;
	_healthPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other) :
	ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	std::cout << "FragTrap operator overload called" << std::endl;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Do you wanna high-five guys?" << std::endl;
}
