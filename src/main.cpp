#include <iostream>
#include "arguments.hpp"

//this program needs to be run from terminal, not run from GUI
int main(int argc, char* argv[])
{
	//figure out what command to do
	ParseArguments(argc, argv);
	//neatly return console to next line when finished exec
	std::cout << "\n";
}