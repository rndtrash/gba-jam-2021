#ifndef TOD_SCENE_H
#define TOD_SCENE_H

class Scene {
public:
    Scene() {};
    virtual ~Scene() {};

    virtual void reset() = 0;

    virtual void draw() = 0;
    virtual void update() = 0;
};

#endif // TOD_SCENE_H