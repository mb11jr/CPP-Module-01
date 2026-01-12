#include "Zombie.hpp"

int main()
{
    // Let's create a zombie on the heap:
	Zombie  *heap_zombie = newZombie("Heap zombie");
    heap_zombie->announce();
    randomChump("Stack zombie");
    delete (heap_zombie);
    return (0);
}
