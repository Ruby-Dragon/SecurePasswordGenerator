/*
    SecurePasswordGenerator - Easily create randomised passwords from the terminal
    Copyright (C) 2022  Ruby-Dragon

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include <vector>
#include <string>
#include <iostream>
#include "random.hpp"
#include "words.hpp"

void ParseArguments(int argc, char* argv[])
{
	//vector of arguments, because vectors are easier to deal with
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
		std::cout << "Pseudo-random password: " << RandomString(Length);
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
				std::cout << "Pseudo-Randomised Words: " << RandomWord(Length);
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
				std::cout << "Pseudo-Randomised Words: " << RandomWord(Length, seed);
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
			std::cout << "Pseudo-Randomised password: " << RandomString(Length, seed);
		}
	}
	else
	{
		//if there are no args
		std::cout << "No length specified.";
	}
}