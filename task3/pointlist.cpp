#include "point.h"
#include "pointlist.h"
#include<list>
#include<iterator>
#include<algorithm>
#include<utility>

void Pointlist::addPoint(int a,int b)
{
	points.push_back(Point(a,b));
}

void Pointlist::display()
{
	std::for_each(points.begin(),points.end(),[=](Point &ref){return ref.display();});
}

int Pointlist::countpointinquadrant(quadrant quad1)
{	
	int count = 0;
	count = std::count_if(points.begin(),points.end(),[quad1](Point &ref){return ref.quad()==quad1;});
	return count;
}

Point* Pointlist::findpointsinquadrant(quadrant quad1)
{
    auto var =std::find_if(points.begin(),points.end(),[=] (Point& r1)
{ 
	return (r1.quad()==quad1 );
}
);
           return &(*var);
}
int Pointlist::displayPointOnCircle(int r){
	int count=0;

	count = std::count_if(points.begin(),points.end(),[r](Point &ref)
		{
		return ((ref.getx()*ref.getx())+(ref.gety()*ref.gety()) == (r*r) ); 
} 
);
	return count;
}

int Pointlist::countall()
{
	return points.size();
}
