#ifndef TOD_TOOLS_H
#define TOD_TOOLS_H

#include "scene.h"

#include "testscene.h"

static Scene* currentScene = nullptr;

static TestScene m_testScene;

static void ChangeScene(Scene* s)
{
    currentScene = s;
    currentScene->reset();
}

#endif // TOD_TOOLS_H