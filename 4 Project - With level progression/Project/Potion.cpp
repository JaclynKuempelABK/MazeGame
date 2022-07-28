#include "Potion.h"
#include <iostream>

Potion::Potion(int x, int y)
	: PlacableActor(x, y)
{

}

void Potion::Draw()
{
	std::cout << (char)235;
}
