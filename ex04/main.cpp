#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
		return 1;
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (s1.empty())
	{
		std::cerr << "Error: s1 cannot be empty." << std::endl;
		return 1;
	}

	std::ifstream inputFile(filename.c_str());
	if(!inputFile.is_open())
	{
		std::cerr << "Error: Could not open file: " << filename << std::endl;
		return 1;
	}
	std::ofstream outputFile((filename + ".replace").c_str());
	if (!outputFile.is_open())
	{
		std::cerr << "Error: Could not create replace file." << std::endl;
		return 1;
	}

	std::string line;
	while (std::getline(inputFile, line))
	{
		std::string content;
		size_t pos = 0;
		size_t foundPos;

		while ((foundPos = line.find(s1, pos)) != std::string::npos)
		{
			content.append(line, pos, foundPos - pos);
			content.append(s2);
			pos = foundPos + s1.length();
		}
		content.append(line, pos);
		outputFile << content;
		if (!inputFile.eof())
			outputFile << std::endl;
	}
	return 0;
}
