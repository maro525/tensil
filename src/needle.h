#pragma once

#include "ofMain.h"

class Needle
{
public:
    Needle(ofVec3f s, ofVec3f e);
    ~Needle();

    void addEdge(ofVec3f e);
    vector<ofVec3f> getEdges() { return edges; };
    int getEdgeSize(){ return edges.size(); };

    ofVec3f getStart(){ return start; };
    ofVec3f getEnd() { return end; };

private:
    ofVec3f start, end;
    vector<ofVec3f> edges;
};
