#include "playerstate.h"

PlayerState::PlayerState()
{
	reset();
}

PlayerState::~PlayerState() {}

void PlayerState::reset() {
	memset(&m_backpack, 0, sizeof(m_backpack));
	memset(&m_bag, 0, sizeof(m_bag));
}