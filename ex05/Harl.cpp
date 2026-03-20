#include "Harl.hpp"
#include <iostream>

void Harl::debag(void){
	std::cout << "[DEBAG]: love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void){
	std::cout << "[INFO]:  cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void){
	std::cout << "[WARING]:  think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void){
	std::cout << "his is unacceptable! I want to speak to the manager now." << std::endl;
}
