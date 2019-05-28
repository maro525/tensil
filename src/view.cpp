#include "view.h"

View::View() {}
View::~View()
{
    delete m;
}

void View::drawRobots()
{
    for (Robot r : m->getRobotRef())
    {
        drawRobot(&r);
    }
}

void View::drawRobot(Robot *r)
{
    ofVec3f p = r->getPos();
    ofDrawEllipse(p.x, p.y, 10, 10);
}

void View::drawNeedles()
{
    for (Needle n : m->getNeedleRef())
    {
        drawNeedle(&n);
    }
}

void View::drawNeedle(Needle *n)
{
    vector<ofVec3f> edges = n->getEdges();
    for (int i = 0; i < edges.size(); i++)
    {
        if (i == 0)
        {
            ofDrawLine(n->getStart().x, n->getStart().y, edges.at(i), edges.at(i).y);
        }
        else if (i == edges.size() - 1)
        {
            ofDrawLine(edges.get(i - 1).x, edges.get(i - 1).y, edges.at(i).x, edges.at(i).y);
            ofDrawLine(edges.at(i).x, edges.at(i).y, n.getEnd().x, n.getEnd().y);
        }
        else
        {
            ofDrawLine(edges.get(i - 1).x, edges.get(i - 1).y, edges.at(i).x, edges.at(i).y);
        }
    }
}