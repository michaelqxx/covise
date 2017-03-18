#ifndef MANEUVER_H
#define MANEUVER_H

using namespace std;
#include<iostream>
#include<string>
#include <vector>
#include <list>
#include <algorithm>
#include <osg/Vec3>
#include <DrivingSim/OpenScenario/schema/oscManeuver.h>


class Maneuver: public OpenScenario::oscManeuver
{

 private:
	string name;


 public:
	Maneuver();
	~Maneuver();

	virtual void finishedParsing();
	float totalDistance;
	osg::Vec3 normDirectionVec;
	vector<osg::Vec3> polylineVertices;
	int visitedVertices;
	int verticesCounter;
	osg::Vec3 newPosition;
	bool maneuverCondition;
	bool arriveAtVertex;
    osg::Vec3 &followTrajectory(osg::Vec3 currentPos, osg::Vec3 targetPosition, float speed);
	string &getName();
	bool getManeuverCondition();
	void setManeuverCondition();
	void setPolylineVertices(osg::Vec3 polyVec);
};

#endif // MANEUVER_H
