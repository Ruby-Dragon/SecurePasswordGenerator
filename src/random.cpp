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

#include <string>
#include <cstdlib>
#include <vector>
#include <chrono>
#include <thread>
#include "words.hpp"

std::string RandomString(int length)
{
	//final string
	std::string fin = std::string();
	for (int i = 0; i < length; i++)
	{
		//set seed to seed based on time and iteration
		std::srand((i * 2.9) + i + time(0));
		//make random int from 33 to 127
		int randint = std::rand() % 94 + 33;
		//cast int to char
		char character = randint;
		//add char to final string
		fin += character;
		//sleep for 8 milliseconds to let time() be different
		std::this_thread::sleep_for(std::chrono::milliseconds(8));
	}
	return fin;
}

std::string RandomString(int length, int seed)
{
	std::string fin = std::string();
	for (int i = 0; i < length; i++)
	{
		//add custom seed to randomness seed
		std::srand((i * 2.9) + seed + time(0));
		int randint = std::rand() % 94 + 33;
		char character = randint;
		fin += character;
		std::this_thread::sleep_for(std::chrono::milliseconds(8));
	}
	return fin;
}

std::vector<int> RandomInts(int length, int depth)
{
	//vector of ints
	std::vector<int> IntArray = std::vector<int>(length);
	for (int i = 0; i < length; i++)
	{
		//set seed
		std::srand((i * 2.9) + i + time(0));
		//make random int from 0 to depth
		int randint = std::rand() % depth;
		//add int to vector
		IntArray[i] = randint;
		//sleep for 8 milliseconds to let time() be different
		std::this_thread::sleep_for(std::chrono::milliseconds(8));
	}
	return IntArray;
}

std::vector<int> RandomInts(int length, int seed, int depth)
{
	std::vector<int> IntArray = std::vector<int>(length);
	for (int i = 0; i < length; i++)
	{
		//add custom seed to randomness seed
		std::srand((i * 2.9) + seed + time(0));
		int randint = std::rand() % depth;
		IntArray[i] = randint;
		std::this_thread::sleep_for(std::chrono::milliseconds(8));
	}
	return IntArray;
}