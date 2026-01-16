#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	// TEST 1: HumanA - Always has a weapon
	{
		std::cout << "--- TEST 1: HumanA ---" << std::endl;
		Weapon arm = Weapon("Knife");
		HumanA bob("Bob", arm);

		bob.attack();
		arm.setType("Sword");
		bob.attack();
	}

	std::cout << std::endl;

	// TEST 2: HumanB - Starts empty-handed, then gets a weapon
	{
		std::cout << "--- TEST 2: HumanB ---" << std::endl;
		Weapon arm = Weapon("Machette");
		HumanB jim("Jim");

		jim.attack();				// Testing Jim while unarmed

		jim.setWeapon(arm); 		// Giving him a weapon
		jim.attack();

		arm.setType("Gun");
		jim.attack();
	}

	return 0;
}
