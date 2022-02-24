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