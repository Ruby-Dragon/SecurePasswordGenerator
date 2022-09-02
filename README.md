# SecurePasswordGenerator

###### GNU Public Licence v3, 2022, Ruby-Dragon

Generate secure-ish passwords easily

Not cyptographically secure.

This project was made to practice CPP and keep my skills up - and to work on when i'm bored

Written in C++ 

## Usage:

	To generate a password, a length cli argument is needed. This is an int and is allways the first argument.

	The -W or -w flag is used to generate a password based on words, ex: HappyBrownCowJumpMoon

	Optionally, enter a random string of any characters after the length or -w, this will be added to the seed for increased randomness.

	THE PASSWORD WILL NOT BE SAVED. Copy the password to somewhere secure, write it down, or memorize it.

	Example of correct usage: "./PasswordGen 12 fhufyfn9fn98fhwejfkwenfi23ury98"
	Another Example:          "./PasswordGen 12 -w uifbnb89w7yfne98wehbfhfn833weg"

## Installation:

	To install, use the source code to build an executable.

	"git clone https://github.com/Ruby-Dragon/SecurePasswordGenerator.git" - copy the source to your machine

	If you do not have git, download the source files from github and unzip

	To build, use cmake gui or cli. Either one works.
	
	To run, use ./PasswordGen (args)

## Licence:

This software uses the GPL licence. Read the terms before using the source code.

###### ALL DERIVATIVE WORKS MUST BE GPL v3 LICENCED AS WELL, AND MUST KEEP ALL COPYRIGHT NOTICES IN CODE. See the LICENCE for more information.
