#pragma once

#include "ofMain.h"

using namespace std;

class Needle
{
public:
    Needle();
    ~Needle();

    void addEdge(ofVec3f e);
    vector<ofVec3f> getEdges() { return edges; };
    int getEdgeSize() { return edges.size(); };

    void setStart(ofVec3f s){ start = s; };
    void setEnd(ofVec3f e){ end = e; };
    ofVec3f getStart() { return start; };
    ofVec3f getEnd() { return end; };

private:
    ofVec3f start, end;
    vector<ofVec3f> edges;
};
