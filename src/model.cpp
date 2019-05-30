#include "model.h"

Model::Model() {}
Model::~Model() {}

void Model::initRobots()
{
    for (int n = 0; n < robotnum; n++)
    {
        float px = ofRandom(0, ofGetWidth());
        float py = ofRandom(0, ofGetHeight());
        robots.push_back(Robot(px, py));
    }
}

void Model::initNeedles()
{
    for (int i = 0; i < needlenum; i++)
    {
        needles.push_back(Needle());
    }
}

void Model::initHolds()
{
    for (int i = 0; i < holdnum; i++)
    {
        holds.push_back(Hold());
    }
}

void Model::setupNeedles()
{
    needles.at(0).setStart(robots.front().getPos());
    for(int i=0; i < robotnum; i++){
        needles.at(0).addEdge(robots.at(i).getPos());
    }
    needles.at(0).setEnd(robots.back().getPos());
}
