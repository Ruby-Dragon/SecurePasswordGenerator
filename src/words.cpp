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

#include "random.hpp"
#include <vector>
#include <string>

//words used to make passwords
std::string words[] = {"Hello", "Turtle", "Happy", "Friendly", "Sad", "Merry", "You", "Hole", "Game", "By", "Power", "Buy", "Rest", "Why", "Tree", "Life", "Funny", "Cat", "Dog", "Cow", "Blue", "Read", "Fence", "Home", "Moon", "Moo", "Shock", "Code", "Black", "Mesa" , "Brown", "Half", "Two", "Three", "One", "Lost", "Rest", "Water", "Swim", "Mad", "Last", "First", "Try", "Jump", "Run", "Walk", "Touch", "Light", "Dark", "Red", "Blue", "Size"};

//generate a random string of a number of words
std::string RandomWord(int length)
{
	//vector of a number of random ints from 0 to 52
	std::vector<int> code = RandomInts(length, 52);
	//current word
	std::string word = "";
	//add words to word based on random ints
	for (int i = 0; i < code.size(); i ++)
	{
		word += words[code[i]];
	}
	return word;
}

//same as above, but with custom seed
std::string RandomWord(int length, int seed)
{
	std::vector<int> code = RandomInts(length, seed, 52);
	std::string word = "";
	for (int i = 0; i < code.size(); i ++)
	{
		word += words[code[i]];
	}
	return word;
}