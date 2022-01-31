//GNU Public Licence v3, 2022, Ruby-Dragon
//
// This source is available for distribution and/or modification
// only under the terms of the SecurePasswordGenerator Source Code License as
// published by Ruby-Dragon. All rights reserved.

#ifndef _RANDOM
#define _RANDOM

#include <string>
#include <vector>

//generate a random string of ascii chars
std::string RandomString(int length);

//generate a random vector of ints
std::vector<int> RandomInts(int length, int depth);

//custom seeds
std::string RandomString(int length, int seed);

std::vector<int> RandomInts(int length, int seed, int depth);

#endif