#include "Harl.hpp"

int main()
{
	Harl message;

	message.complain("DEBUG");
	message.complain("INFO");
	message.complain("WARNING");
	message.complain("ERROR");
	message.complain("Nothing significant");
}
