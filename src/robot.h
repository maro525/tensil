#pragma once

#include "ofMain.h"

class Robot
{
public:
    Robot(float x, float y);
    ~Robot();

    ofVec3f getPos() { return pos; };

private:
    ofVec3f pos;
};
