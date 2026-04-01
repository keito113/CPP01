#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int i;

	if(N <= 0)
		return(NULL);
	Zombie* horde = new Zombie[N];
	try{
		i = 0;
		while(i < N){
			horde[i].setName(name);
			i++;
		}
	}
	catch(...){
		delete[] horde;
		throw;
	}
	return(horde);
}
