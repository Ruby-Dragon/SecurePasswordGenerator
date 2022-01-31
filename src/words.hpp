//GNU Public Licence v3, 2022, Ruby-Dragon
//
// This source is available for distribution and/or modification
// only under the terms of the SecurePasswordGenerator Source Code License as
// published by Ruby-Dragon. All rights reserved.

#ifndef _WORDS
#define _WORDS

#include <string>

//generates a random string of words
std::string RandomWord(int length);

//custom seed
std::string RandomWord(int length, int seed);

#endif