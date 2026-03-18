#include <iostream>
#include <string>
#include "Replacer.hpp"


int main(int ac, char *av[]){
	std::string filename;
	std::string s1;
	std::string s2;
	if(ac != 4){
		std::cout << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
		return(1);
	}
	filename = av[1];
	s1 = av[2];
	s2 = av[3];

	if(!processReplacement(filename, s1, s2))
		return(1);
	return(0);
}
