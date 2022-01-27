#include <string>
#include <cstdlib>
#include <vector>

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

std::string RandomString(int length)
{
	std::string fin = std::string();
	for (int i = 0; i < length; i++)
	{
		std::srand((i * 2.9) + i + time(0));
		int randint = std::rand() % 94 + 33;
		char character = randint;
		fin += character;
		sleep(0.008);
	}
	return fin;
}

std::vector<int> RandomInts(int length)
{
	std::vector<int> IntArray = std::vector<int>(length);
	for (int i = 0; i < length; i++)
	{
		std::srand((i * 2.9) + i + time(0));
		int randint = std::rand() % 25;
		IntArray[i] = randint;
	}
	return IntArray;
}