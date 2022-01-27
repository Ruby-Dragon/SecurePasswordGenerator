#include <string>
#include <cstdlib>

std::string RandomString()
{
	std::srand(time(0));
	int randint = std::rand() % 94 + 33;
	char character = randint;
	std::string fin = std::string(1, character);
	return fin;
}