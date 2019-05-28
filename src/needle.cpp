#include "Needle.h"

Needle::Needle(ofVec3f s, ofVec3f e)
{
    start = s;
    end = e;
}
Needle::~Needle() {}

void Needle::addEdge(ofVec3f e)
{
    edges.push_back(e);
}