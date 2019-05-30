#pragma once

#include "robot.h"
#include "needle.h"
#include "hold.h"

using namespace std;

class Model
{
public:
    Model();
    ~Model();
    void initRobots();
    void initNeedles();
    void initHolds();
    void setupNeedles();

    vector<Robot> robots;
    vector<Needle> needles;
    vector<Hold> holds;

private:
    int robotnum = 8;
    int needlenum = 1;
    int holdnum = 3;
};
