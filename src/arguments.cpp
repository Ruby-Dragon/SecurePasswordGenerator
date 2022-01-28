#include <vector>
#include <string>
#include <iostream>

void ParseArguments(int argc, char* argv[])
{
	std::vector<std::string> ArgVector;
	if (argc > 2)
	{
		for (int i = 1; i < argc -1; i++)
		{
			ArgVector.insert(ArgVector.end(), argv[i]);
		}
	}

	if (argc == 2)
	{

	}
	else if (argc > 2)
	{
		
	}
}