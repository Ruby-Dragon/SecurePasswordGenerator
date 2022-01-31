#ifndef _RANDOM
#define _RANDOM

#include <string>
#include <vector>

std::string RandomString(int length);

std::vector<int> RandomInts(int length, int depth);

std::string RandomString(int length, int seed);

std::vector<int> RandomInts(int length, int seed, int depth);

#endif