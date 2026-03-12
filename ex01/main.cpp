#include "Zombie.hpp"

int main()
{
	int i;
	int n;
	Zombie* horde;
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
	return(0);
}
