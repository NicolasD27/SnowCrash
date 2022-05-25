#include <string>
#include <stdlib.h>
#include <iostream>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "wrong number of args" << std::endl;
	}
	std::string hex = std::string(av[1]);
	int len = hex.length();
	std::string str;
	for(int i=0; i< len; i+=2)
	{
		std::string byte = hex.substr(i,2);
		char chr = (char) (int)strtol(byte.c_str(), NULL, 16);
		str.push_back(chr);
	}

	for (int i = 0; i < str.length(); i++)
		str[i] -= i % str.length();
	std::cout << str << std::endl;
}
