#pragma once

#include "robot.h"
#include "needle.h"

class Model
{
public:
    Model();
    ~Model();
    void initRobots();
    void initNeedles();

    vector<Robot> getRobotRef() { return robots; };
    vector<Needle> getNeedleRef() { return needles; };

private:
    vector<Robot> robots;
    vector<Needle> needles;
    int robotnum = 20;
    int needlenum = 1;
};
