#pragma once

#include "ofMain.h"

using namespace std;

class Hold
{
public:
    Hold();
    ~Hold();

    ofVec3f getPos(){ return pos; };
private:
    ofVec3f pos;
};
