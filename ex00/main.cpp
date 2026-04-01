#include "Zombie.hpp"
#include <exception>

int main()
{
	Zombie* zombie1 = NULL;
	try{
		zombie1 = newZombie("Zombie1");
		zombie1->announce();
		delete zombie1;
	}
	catch(const std::bad_alloc& e){
		delete zombie1;
		std::cerr << "allocation failed: " << e.what() << std::endl;
		return(1);
	}
	catch(const std::exception& e){
		delete zombie1;
		std::cerr << "Exception caught: " << e.what() << std::endl;
		return(1);
	}
	catch(...){
		delete zombie1;
		std::cerr << "Unknown exception caught" << std::endl;
		return(1);
	}
	randomChump("Zombie2");
	return 0;
}
