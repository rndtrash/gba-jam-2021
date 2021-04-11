#ifndef TOD_PLAYERSTATE_H
#define TOD_PLAYERSTATE_H

#include <cstring>

#include "inventory.h"

class PlayerState
{
public:
	PlayerState();
	~PlayerState();

	void reset();

private:
	Backpack m_backpack;
	Bag m_bag;
};

#endif // TOD_PLAYERSTATE_H