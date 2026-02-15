#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) :
	ClapTrap(name)
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->_
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) :
	DiamondTrap(other)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

//DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
//{
//	if (this != &other)
//	{
//		this->_name = FragTrap()
//	}
//}