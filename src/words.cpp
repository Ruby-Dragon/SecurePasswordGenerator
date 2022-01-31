#include "random.hpp"
#include <vector>
#include <string>

std::string words[] = {"Hello", "Turtle", "Happy", "Friendly", "Sad", "Merry", "You", "Hole", "Game", "By", "Power", "Buy", "Rest", "Why", "Tree", "Life", "Funny", "Cat", "Dog", "Cow", "Blue", "Read", "Fence", "Home", "Moon", "Moo", "Shock", "Code"};

std::string RandomWord(int length)
{
	std::vector<int> code = RandomInts(length);
	std::string word = "";
	for (int i = 0; i < code.size(); i ++)
	{
		word += words[code[i]];
	}
	return word;
}

std::string RandomWord(int length, int seed)
{
	std::vector<int> code = RandomInts(length, seed);
	std::string word = "";
	for (int i = 0; i < code.size(); i ++)
	{
		word += words[code[i]];
	}
	return word;
}