#ifndef __POINTLIST_H_
#define __POINTLIST_H_

#include<list>
#include<iterator>
#include "point.h"

class Pointlist{
	std::list <Point> points;
	
	public:
		void addPoint(int, int);
		void display();
		int countpointinquadrant(quadrant);
		Point* findpointsinquadrant(quadrant);
		int displayPointOnCircle(int);
		int countall();
};
#endif
