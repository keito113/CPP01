#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Default constructor called" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "Constructor called for " << _name << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destructor called for " << _name << std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	_name = name;
}
