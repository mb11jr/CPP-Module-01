#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Address of the string: " << &str << std::endl;
	std::cout << "Address that stringPTR holds: " << stringPTR << std::endl;
	std::cout << "Address that stringREF holds " << &stringREF << std::endl;

	std::cout << "--------------------------------" << std::endl;

	std::cout << "Value of the string: " << str << std::endl;
	std::cout << "Value in stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value in stringREF: " << stringREF << std::endl;

	return 0;
}
