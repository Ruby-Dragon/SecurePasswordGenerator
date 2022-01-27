#include <iostream>
#include <vector>
#include "random.hpp"

int main(int argc, char *argv[])
{
	std::cout << RandomString(29) << "\n";
	std::vector<int> p = RandomInts(29);
	for (int i = 0; i < p.size(); i++)
	{
		std::cout << p[i] << "\n";
	}
}