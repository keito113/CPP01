#include "Zombie.hpp"
#include <exception>

int main()
{
	int i;
	int n;
	Zombie* horde;
	try{
		n = 5;
		horde = zombieHorde(n, "Foo");
		if(horde == NULL)
			return(1);
		i = 0;
		while(i < n)
		{
			horde[i].announce();
			i++;
		}
		delete[] horde;
	}
	catch(const std::exception& e){
		std::cerr << "Exception caught: " << e.what() << std::endl;
		return(1);
	}
	catch(...){
		std::cerr << "Unknown exception caught" << std::endl;
		return(1);
	}
	return(0);
}
