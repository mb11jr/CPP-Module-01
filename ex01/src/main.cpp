#include "Zombie.hpp"

int main()
{
	int N = 3;
	Zombie* horde;

	horde = zombieHorde(N, "SuperZombie");
	if (!horde)
		return 1;
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;
	return 0;
}
