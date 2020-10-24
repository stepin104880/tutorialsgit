#include "book.h"
#include "library.h"
#include<gtest/gtest.h>

namespace {

class LibraryTest : public ::testing::Test {

protected:
  void SetUp() { 
    libs.addBook(2512,"Inferno","D.Brown","Historical Sights",599,568);
    libs.addBook(2007,"Lights Out","D.Sandberg","Blumhouse Productions",299,315);
    libs.addBook(2727,"Cast Away","T.Hanks","Wilson Productions",349,433);

  }
  void TearDown() {}
  Library libs;
 
};

TEST_F(LibraryTest, AddBookTest) {
  libs.addBook(1562, "History Of Dibs", "B.Stinson","Westchester House",149,177);
  EXPECT_EQ(4,libs.countall());
}
TEST_F(LibraryTest, RemoveBookTest) {
  libs.removeBookById(4);
  EXPECT_EQ(NULL, libs.findBookById(4));
  EXPECT_EQ(44,libs.findAveragePrice());
  EXPECT_EQ(3,libs.countall());
}
}

