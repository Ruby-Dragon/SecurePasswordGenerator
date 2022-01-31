#include <vector>
#include <string>
#include <iostream>
#include "random.hpp"
#include "words.hpp"

void ParseArguments(int argc, char* argv[])
{
	//vector of aguments, because vectors are easier to deal with
	std::vector<std::string> ArgVector;
	//std::cout << argc << "\n";
	//if there are more than 2 args, add to arg vector, but cut off exe name
	if (argc >= 2)
	{
		for (int i = 1; i <= argc -1; i++)
		{
			//std::cout << "!\n";
			ArgVector.insert(ArgVector.end(), argv[i]);
		}
	}

	//if exactly 2 args
	if (argc == 2)
	{
		//get length of arg 1 - length of password
		int Length = stoi(ArgVector[0]);
		if (Length <= 0)
		{
			//if the arg is not used correctly
			std::cout << "Argument 1 needs to be an integer greater than 0.\n";
			return;
		}
		//else, output a random password
		std::cout << "THIS PASSWORD WILL NOT BE SAVED!\n";
		std::cout << "Psudo-random password: " << RandomString(Length);
	}
	//if there are more than 2 args
	else if (argc > 2)
	{
		//get length for password
		int Length = stoi(ArgVector[0]);
		if (Length <= 0)
		{
			std::cout << "Argument 1 needs to be an integer greater than 0.\n";
			return;
		}

		//check if password should be words
		if (ArgVector[1] == "-w" || ArgVector[1] == "-W")
		{
			//if there is no custom seed
			if (argc == 3)
			{
				//output random string of words
				std::cout << "THIS PASSWORD WILL NOT BE SAVED!\n";
				std::cout << "Psudo-Randomised Words: " << RandomWord(Length);
			}
			//if there is a custom seed
			else if (argc > 3)
			{
				//turn the string into an int via casting
				const char * seedStr = ArgVector[1].c_str();
				int seed = 0;
				//every char in string...
				for (int i = 0; i < ArgVector[1].length(); i++)
				{
					//add ascii value to seed
					seed += seedStr[i];
				}
				//output random string of words based on custom seed
				std::cout << "THIS PASSWORD WILL NOT BE SAVED!\n";
				std::cout << "Psudo-Randomised Words: " << RandomWord(Length, seed);
			}
		}
		//if there is no -w
		else
		{
			//make custom seed
			const char * seedStr = ArgVector[1].c_str();
			int seed = 0;
			for (int i = 0; i < ArgVector[1].length(); i++)
			{
				seed += seedStr[i];
			}
			//output random string of chars based on custom seed
			std::cout << "THIS PASSWORD WILL NOT BE SAVED!\n";
			std::cout << "Psudo-Randomised password: " << RandomString(Length, seed);
		}
	}
	else
	{
		//if there are no args
		std::cout << "No length specified.";
	}
}