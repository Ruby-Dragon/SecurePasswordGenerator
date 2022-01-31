//GNU Public Licence v3, 2022, Ruby-Dragon
//
// This source is available for distribution and/or modification
// only under the terms of the SecurePasswordGenerator Source Code License as
// published by Ruby-Dragon. All rights reserved.

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