#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    // TEST 1: HumanA - Always has a weapon
    {
        std::cout << "--- TEST 1: HumanA ---" << std::endl;
        Weapon club = Weapon("Knife");
        HumanA bob("Bob", club);

        bob.attack();
        club.setType("Sword");
        bob.attack();
    }

    std::cout << std::endl;

    // TEST 2: HumanB - Starts empty-handed, then gets a weapon
    {
        std::cout << "--- TEST 2: HumanB ---" << std::endl;
        Weapon club = Weapon("Machette");
        HumanB jim("Jim");

        jim.attack();          // Testing Jim while unarmed

        jim.setWeapon(club);   // Giving him a weapon
        jim.attack();

        club.setType("Gun");
        jim.attack();
    }

    return 0;
}
