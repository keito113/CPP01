#include "Weapon.hpp"
#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string& name):
	_name(name)
{
}

void HumanB::setWeapon(Weapon& weapon){
	_weapon = &weapon;
}

void HumanB::attack(void) const{
	if(_weapon != NULL){
		std::cout << _name << "attack with their" << _weapon->getType() << std::endl;
	}
}
