#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) :
	ClapTrap(name)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	_healthPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) :
	ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	std::cout << "ScavTrap operator overload called" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap dectructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_healthPoints == 0)
	{
		std::cout << this->_name << " died" << std::endl;
		return;
	}
	else if (this->_energyPoints == 0)
	{
		std::cout << this->_name << " is out of energy" << std::endl;
		return;
	}
	else
	{
		this->_energyPoints -= 1;
		std::cout << this->_name << "[hp=" << this->_healthPoints << "]" << " is attacking " << target << ", with -" << this->_attackDamage << " damage!" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "We are in the Gate keeper mode" << std::endl;
}