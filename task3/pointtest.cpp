#include "pointlist.h"
#include "point.h"

#include <gtest/gtest.h>
namespace {

class PointTest : public ::testing::Test {
  
  protected:
    void SetUp() { //override {
	pointt.addPoint(4,0);
	pointt.addPoint(2,1);
	pointt.addPoint(4,3);
	pointt.addPoint(-1,2);

    }
    void TearDown()
    {
    }
    Pointlist pointt;
}; 
   
TEST_F(PointTest,CountingPoints) {
  EXPECT_EQ(4,pointt.countall());
}
TEST_F(PointTest,CountingPointsInQuadrant) {
  EXPECT_EQ(2,pointt.countpointinquadrant(Q1));
}
TEST_F(PointTest,CountPointOnCircle) {
  EXPECT_EQ(1,pointt.displayPointOnCircle(4));
}
}
