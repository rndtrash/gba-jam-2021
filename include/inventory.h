#ifndef TOD_INVENTORY_H
#define TOD_INVENTORY_H

#include <cstdint>
#include <cstddef>

#include "items/component.h"
#include "items/patron.h"
#include "items/gun.h"

#define PLAYER_BACKPACK_ROWS 5
#define PLAYER_BACKPACK_COLS 5
#define PLAYER_BACKPACK_COUNT (PLAYER_BACKPACK_ROWS * PLAYER_BACKPACK_COLS)

enum ItemType
{
	NONE = 0,
	PATRON,
	GUN
} __attribute__((__packed__));

struct BackpackItem
{
	ItemType itemType;
	union
	{
		ItemPatron patron;
		ItemGun gun;
	};
};

typedef BackpackItem Backpack[PLAYER_BACKPACK_COUNT];
typedef BagItem Bag[COMPONENT_COUNT];

#if 0

// this function is just to see how big the struct is from IDE
static void poop()
{
	size_t a;
	a = sizeof(Component);
	a = sizeof(ItemPatron);
	a = sizeof(ItemGun);

	a = sizeof(BackpackItem);
	a = sizeof(BagItem);

	a = sizeof(Backpack);
	a = sizeof(Bag);
}

#endif

#endif // TOD_INVENTORY_H