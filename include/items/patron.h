#ifndef TOD_ITEMS_PATRON_H
#define TOD_ITEMS_PATRON_H

#include <cstdint>

#include "component.h"

struct ItemPatron
{
	Component casing;
	Component propellant;
	Component bullet;
};

#endif // TOD_ITEMS_PATRON_H