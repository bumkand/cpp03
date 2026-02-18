#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
	_name("Default"),
	_healthPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :
	_name(name),
	_healthPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "Constructor with parameter called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) :
	_name(other._name),
	_healthPoints(other._healthPoints),
	_energyPoints(other._energyPoints),
	_attackDamage(other._attackDamage)
{
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_healthPoints = other._healthPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_healthPoints == 0)
	{
		std::cout << this->_name << " is dead" << std::endl;
		return;
	}
	else if (this->_energyPoints == 0)
	{
		std::cout << this->_name << " have not enaugh energy" << std::endl;
		return;
	}
	else
	{
		this->_energyPoints -= 1;
		std::cout << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}

}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_healthPoints == 0)
	{
		std::cout << this->_name << " is already dead" << std::endl;
		return;
	}
	else if (this->_healthPoints <= amount)
	{
		this->_healthPoints = 0;
		std::cout << this->_name << " is dead" << std::endl;
		return;
	}
	else
	{
		this->_healthPoints -= amount;
		std::cout << this->_name << " - " << amount << " health points! [hp=" << this->_healthPoints << "]" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_healthPoints == 0)
	{
		std::cout << this->_name << " is dead" << std::endl;
		return;
	}
	else if (this->_energyPoints == 0)
	{
		std::cout << this->_name << " don't have enaught energy points" << std::endl;
		return;
	}
	else
	{
		_energyPoints -= 1;
		_healthPoints += amount;
		std::cout << this->_name << " + " << amount << " health points! [hp=" << this->_healthPoints << "]" << " [ep=" << this->_energyPoints << "]" << std::endl;
	}
}

