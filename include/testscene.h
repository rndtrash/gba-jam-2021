#ifndef TOD_TESTSCENE_H
#define TOD_TESTSCENE_H

#include "scene.h"

class TestScene : public Scene
{
public:
    TestScene() {};
    ~TestScene() {};

    void reset() override {};

    void draw() override {};
    void update() override {};
};

#endif // TOD_TESTSCENE_H