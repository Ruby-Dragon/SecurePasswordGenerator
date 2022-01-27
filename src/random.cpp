#include <string>
#include <cstdlib>

std::string RandomString(int length)
{
	std::string fin = std::string();
	for (int i = 0; i < length; i++)
	{
		std::srand((i * 2.9) + i + time(0));
		int randint = std::rand() % 94 + 33;
		char character = randint;
		fin += character;
	}
	return fin;
}