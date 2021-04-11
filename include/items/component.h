#ifndef TOD_ITEMS_COMPONENT_H
#define TOD_ITEMS_COMPONENT_H

#include <cstdint>

enum Component
{
	GUNPOWDER = 0
} __attribute__ ((__packed__));

#define COMPONENT_COUNT 1

struct BagItem
{
	Component component;
	uint8_t count;
};

#endif // TOD_ITEMS_COMPONENT_H