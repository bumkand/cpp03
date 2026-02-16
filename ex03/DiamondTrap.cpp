#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) :
	ClapTrap(name + "_clap_name"),
	FragTrap(name),
	ScavTrap(name),
	_name(name)
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	_healthPoints = FragTrap::_healthPoints; // _hitPoints = 100;  
	_energyPoints = ScavTrap::_energyPoints; // _energyPoints = 50;
	_attackDamage = FragTrap::_attackDamage; // _attackDamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) :
	ClapTrap(other),
	FragTrap(other),
	ScavTrap(other),
	_name(other._name)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		_name = other._name;
	}
	std::cout << "DiamondTrap operator overload called" << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << DiamondTrap::_name << std::endl;
	std::cout << ClapTrap::_name << std::endl;
}