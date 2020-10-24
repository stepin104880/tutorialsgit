#include "point.h"
#include <iostream>
#include <math.h>
        Point::Point(): m_x (0),m_y (0){}

        Point::Point(int a, int b): m_x (a), m_y (b){}
        
        double Point:: distanceFromOrigin(){
            return (sqrt((m_x*m_x)+(m_y*m_y)));
        }
	quadrant Point:: quad(){
            if(m_x>0 && m_y>0)
                return Q1;
            if(m_x<0 && m_y>0)
                return Q2;
            if(m_x<0 && m_y<0)
                return Q3;
            else
                return Q4;
        }
        

        bool Point:: isOrigin(){
            if(m_x==0 && m_y==0)
                return true;
            else
                return false;
        }

        bool Point:: isOnXAxis(){
            if(m_y==0 && m_x!=0)
                return true;
            else
                return false;
        }

        bool Point:: isOnYAxis(){
            if(m_x==0 && m_y!=0)
                return true;
            else
                return false;
        }
        int Point::getx(){
        return m_x;
	}
	
	int Point::gety(){
	return m_y;
	}
        void Point:: display(){
        cout<<m_x<<" "<<m_y<<endl;
        }
