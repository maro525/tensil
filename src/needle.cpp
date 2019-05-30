#include "needle.h"

Needle::Needle(){}
Needle::~Needle() {}

void Needle::addEdge(ofVec3f e)
{
    edges.push_back(e);
}