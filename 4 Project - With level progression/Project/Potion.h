#pragma once
#include "PlacableActor.h"

class Potion :
    public PlacableActor
{
public:
	Potion(int x, int y);

	virtual ActorType GetType() override { return ActorType::Potion; }
	virtual void Draw() override;
};