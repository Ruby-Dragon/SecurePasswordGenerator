#include <iostream>
#include <vector>
#include "random.hpp"
#include "words.hpp"

int main(int argc, char* argv[])
{
	
	std::cout << RandomString(29) << "\n";
	std::vector<int> p = RandomInts(29);
	std::cout << RandomWord(5) << "\n";
}