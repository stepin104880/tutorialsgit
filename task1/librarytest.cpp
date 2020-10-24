#include "book.h"
#include "library.h"
#include<gtest/gtest.h>

namespace {

class LibraryTest : public ::testing::Test {

protected:
  void SetUp() { 
    libs.addBook(2512,"Inferno","D.Brown","Historical Sights",600,568);
    libs.addBook(2007,"Lights Out","D.Sandberg","Blumhouse Productions",200,315);
    libs.addBook(2727,"Cast Away","T.Hanks","Wilson Productions",400,433);

  }
  void TearDown() {}
  Library libs;
 
};
TEST_F(LibraryTest, AveragePrice) {
  EXPECT_EQ(400,libs.findAveragePrice());
}
}

TEST_F(LibraryTest, AddBookTest) {
  libs.addBook(1562, "History Of Dibs", "B.Stinson","Westchester House",4,177);
  EXPECT_EQ(4,libs.countall());
}

TEST_F(LibraryTest, Bookwithmaxpages){
	EXPECT_EQ(568,libs.findBookWithMaxPages());
}
