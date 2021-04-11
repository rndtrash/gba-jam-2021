#ifndef TOD_TESTSCENE_H
#define TOD_TESTSCENE_H

#include "bn_core.h"
#include "bn_math.h"
#include "bn_keypad.h"
#include "bn_display.h"
#include "bn_optional.h"
#include "bn_sprite_ptr.h"
#include "bn_bg_palettes.h"
#include "bn_sprite_text_generator.h"
#include "fixed_8x16_sprite_font.h"

#include "scene.h"

constexpr const bn::fixed text_y_inc = 14;
constexpr const bn::fixed text_y_limit = (bn::display::height() / 2) - text_y_inc;

class TestScene : public Scene
{
public:
	TestScene() : text_generator(fixed_8x16_sprite_font)
	{
		text_generator.set_center_alignment();
		text_generator.generate(0, -text_y_limit, "Text", text_sprites);
		text_generator.generate(0, text_y_limit, "START: go to next scene", text_sprites);
		reset();
	};
	~TestScene() override{};

	void reset() override{};

	void draw() override
	{
	};
	void update() override{};

private:
	bn::sprite_text_generator text_generator;
	bn::vector<bn::sprite_ptr, 110> text_sprites;
};

#endif // TOD_TESTSCENE_H