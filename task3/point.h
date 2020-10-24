#ifndef __POINT_H_
#define __POINT_H_
#include <iostream>
#include <string.h>
using namespace std;

enum quadrant{
    Q1,
    Q2,
    Q3,
    Q4
};
class Point{
	int m_x,m_y;
	public :
	Point();
	Point(int, int);
	double distanceFromOrigin();
	quadrant quad();
	bool isOrigin();
	bool isOnXAxis();
	bool isOnYAxis();
	int getx();
	int gety();
	void display();
};
#endif
