#include "customer.h"
#include "postpaid.h"
#include "prepaid.h"

#include <gtest/gtest.h>
namespace {

class CustomerTest : public ::testing::Test {

protected:
  void SetUp()
  { // override {
    pre = new PrepaidCustomer(1001, "Lippman", "9845012345", 1000);
    pre->makeCall(10);
    pre->credit(100);

    post = new PostpaidCustomer(1002, "Scott", "9845012346", 0);
    post->makeCall(150);
    post->credit(100);
  }
  void TearDown()
  {
    delete pre;
    delete post;
  }
  CustomerBase *pre;
  CustomerBase *post;
};

TEST_F(CustomerTest, DefaultConstructor) {
  PrepaidCustomer c1;
  EXPECT_EQ(0.0, c1.getBalance());
  EXPECT_EQ(0.0, c1.getCustomerId());
  EXPECT_EQ(0, c1.getCustomerName().length());
}
TEST_F(CustomerTest, ParameterizedConstructorPre) {
  EXPECT_EQ(1001, pre->getCustomerId());
  EXPECT_STREQ("Lippman", pre->getCustomerName().c_str());
  EXPECT_EQ(7, pre->getCustomerName().length());
  EXPECT_EQ(1090.0, pre->getBalance());  // 1000 - 10 + 100
}
TEST_F(CustomerTest, ParameterizedConstructorPost) {
  EXPECT_EQ(1002, post->getCustomerId());
  EXPECT_STREQ("Scott", post->getCustomerName().c_str());
  EXPECT_EQ(5, post->getCustomerName().length());
  EXPECT_EQ(50.0, post->getBalance());   // 0 + 150 - 100
}
TEST_F(CustomerTest, PrepaidCreditTest) {
  pre->credit(110);
  EXPECT_EQ(1200, pre->getBalance());  //1090 + 110
}
TEST_F(CustomerTest, PrepaidCallTest) {
  pre->makeCall(15);
  EXPECT_EQ(1075, pre->getBalance()); //1090 - 15
}
TEST_F(CustomerTest, PostpaidCreditTest) {
  post->credit(300);
  EXPECT_EQ(-250, post->getBalance());  //50 - 300
}
TEST_F(CustomerTest, PostpaidCallTest) {
  post->makeCall(25);
  EXPECT_EQ(75, post->getBalance());  //50 + 25
}

}
int main(int argc, char **argv)
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    } // namespace
