#pragma once

#include "model.h"

class View
{
public:
    View();
    ~View();
    void setModel(Model *ref) { m = ref; };

    void drawRobots();
    void drawRobot(Robot *r);
    void drawNeedles();
    void drawNeedle(Needle *n);

private:
    Model *m;
};
