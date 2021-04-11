#ifndef TOD_TOOLS_H
#define TOD_TOOLS_H

#include "playerstate.h"
#include "scene.h"

#include "testscene.h"

static PlayerState playerState;

static Scene *currentScene = nullptr;

static void InitStaticVars()
{
	playerState = {};
}

static void ChangeScene(Scene *s)
{
	if (currentScene != nullptr)
		delete currentScene;

	currentScene = s;
	currentScene->reset();
}

#endif // TOD_TOOLS_H