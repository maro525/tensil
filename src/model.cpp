#include "model.h"

Model::Model() {}
Model::~Model() {}

void Model::initRobots()
{
    for (int n = 0; n < robotnum; n++)
    {
        float px = ofRandom(0, ofGetWidth());
        float py = ofRandom(0, ofGetHeight());
        robots.push_back(new Robot(px, py));
    }
}

void Model::initNeedles()
{
    for (int i = 0; i < needlenum; i++)
    {
        ofVec3f start = ofVec3f(10, 10, 0);
        ofVec3f end = ofVec3f(200, 200, 0);
        needles.push_back(new Needle(start, end));
    }
}
