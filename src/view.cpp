#include "view.h"

View::View() {}
View::~View() {}

void View::drawRobots()
{
    int size = m->robots.size();
    if (size == 0)
        return;
    for (int i = 0; i < size; i++)
    {
        drawRobot(m->robots.at(i));
    }
}

void View::drawRobot(Robot r)
{
    ofPushStyle();
    ofSetColor(255);
    ofVec3f p = r.getPos();
    ofDrawEllipse(p.x, p.y, 10, 10);
    ofPopStyle();
}

void View::drawNeedles()
{
    int size = m->needles.size();
    if (size == 0)
        return;
    for (int i = 0; i < size; i++)
    {
        drawNeedle(m->needles.at(i));
    }
}

void View::drawNeedle(Needle n)
{
    ofPushStyle();
    ofSetColor(255);
    vector<ofVec3f> edges = n.getEdges();
    for (int i = 0; i < edges.size(); i++)
    {
        if (i == 0)
        {
            ofDrawLine(n.getStart().x, n.getStart().y, edges.at(i).x, edges.at(i).y);
        }
        else if (i == edges.size() - 1)
        {
            ofDrawLine(edges.at(i - 1).x, edges.at(i - 1).y, edges.at(i).x, edges.at(i).y);
            ofDrawLine(edges.at(i).x, edges.at(i).y, n.getEnd().x, n.getEnd().y);
        }
        else
        {
            ofDrawLine(edges.at(i - 1).x, edges.at(i - 1).y, edges.at(i).x, edges.at(i).y);
        }
    }
    ofPopStyle();
}

void View::drawHolds()
{
    
}