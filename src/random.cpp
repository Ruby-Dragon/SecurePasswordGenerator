#include <string>
#include <cstdlib>
#include <vector>
#include <chrono>
#include <thread>

std::string RandomString(int length)
{
	std::string fin = std::string();
	for (int i = 0; i < length; i++)
	{
		std::srand((i * 2.9) + i + time(0));
		int randint = std::rand() % 94 + 33;
		char character = randint;
		fin += character;
		std::this_thread::sleep_for(std::chrono::milliseconds(8));
	}
	return fin;
}

std::vector<int> RandomInts(int length)
{
	std::vector<int> IntArray = std::vector<int>(length);
	for (int i = 0; i < length; i++)
	{
		std::srand((i * 2.9) + i + time(0));
		int randint = std::rand() % 28;
		IntArray[i] = randint;
		std::this_thread::sleep_for(std::chrono::milliseconds(8));
	}
	return IntArray;
}