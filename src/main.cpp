/*
Trade or Die (TEMP NAME)
Copyright (C) 2021 Ivan Kuzmenko

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include "bn_core.h"
#include "bn_bg_palettes.h"

#include "scene.h"
#include "tools.h"

int main()
{
	bn::core::init();
	bn::bg_palettes::set_transparent_color(bn::color(16, 16, 16));

	InitStaticVars();
	ChangeScene(new TestScene());

	while (true)
	{
		currentScene->draw();
		currentScene->update();

		bn::core::update();
	}
}
