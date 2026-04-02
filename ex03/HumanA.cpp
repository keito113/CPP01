#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA(const std::string& name, Weapon& weapon):
	_name(name),
	_weapon(weapon)
{
}

void HumanA::attack(void) const{
	std::cout << _name << " attack with their " << _weapon.getType() << std::endl;
}
