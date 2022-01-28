#include <vector>
#include <string>
#include <iostream>
#include "random.hpp"
#include "words.hpp"

void ParseArguments(int argc, char* argv[])
{
	std::vector<std::string> ArgVector;
	//std::cout << argc << "\n";
	if (argc >= 2)
	{
		for (int i = 1; i <= argc -1; i++)
		{
			//std::cout << "!\n";
			ArgVector.insert(ArgVector.end(), argv[i]);
		}
	}

	if (argc == 2)
	{
		int Length = stoi(ArgVector[0]);
		if (Length <= 0)
		{
			std::cout << "Argument 1 needs to be an integer greater than 0.\n";
			return;
		}
		std::cout << "THIS PASSWORD WILL NOT BE SAVED!\n";
		std::cout << "Psudo-random password: " << RandomString(Length);
	}
	else if (argc > 2)
	{
		int Length = stoi(ArgVector[0]);
		if (Length <= 0)
		{
			std::cout << "Argument 1 needs to be an integer greater than 0.\n";
			return;
		}

		if (ArgVector[1] == "-w" || ArgVector[1] == "-W")
		{
			std::cout << "THIS PASSWORD WILL NOT BE SAVED!\n";
			std::cout << "Psudo-Randomised Words: " << RandomWord(Length);
		}
	}
}