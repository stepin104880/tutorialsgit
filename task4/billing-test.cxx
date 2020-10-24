#include "billing.h"
#include "prepaid.h"
#include "postpaid.h"
#include "customer.h"

#include <gtest/gtest.h>
namespace {

class BillingTest : public ::testing::Test {

protected:
  void SetUp()
  {
    customers.addCustomer(1001, "Lebron", "9845012345", 400);
    customers.addCustomer(1002, "James", "9845012346", 800);
    customers.addCustomer(1003, "Durant", "9845122337", 300);
    customers.addCustomer(1004, "Gasol", "9855212648", 500);
    customers.addCustomer(1005, "Nash", "9845012349", 600);
    customers.addCustomer(1006, "Bryant", "9845012340", 250);
  }
  void TearDown() {}
  MobileBilling customers;
};

TEST_F(BillingTest, AddCustomerTest) {
  customers.addCustomer(1009, "John", "9845012350", 100);
  //EXPECT_EQ(1009, customers.findCustomerById(1009));
  EXPECT_EQ(7, customers.countAll());
}

TEST_F(BillingTest, CountTest) {             //Just After Setup
  EXPECT_EQ(6, customers.countAll());
}
TEST_F(BillingTest, FindByIdTestTrue) {
  CustomerBase *ptr = customers.findCustomerById(1004);
  //EXPECT_NE(NULL, ptr);
  EXPECT_EQ(500, ptr->getBalance());
  EXPECT_STREQ("Gasol", ptr->getCustomerName().c_str());
  EXPECT_STREQ("9855212648", ptr->getPhone().c_str());
}

TEST_F(BillingTest, FindByPhoneTest) {
  CustomerBase *ptr = customers.findCustomerByPhone("9845122337");
  EXPECT_EQ(300, ptr->getBalance());
  EXPECT_STREQ("Durant", ptr->getCustomerName().c_str());
  EXPECT_EQ(1003, ptr->getCustomerId());
}
TEST_F(BillingTest, AverageTest) {
  double avg = customers.findAverageBalance();
  EXPECT_EQ(475.0, avg);
}
TEST_F(BillingTest, MaxTest) {
  double maxbal = customers.findMaxBalance();
  EXPECT_EQ(800.0, maxbal);
}
TEST_F(BillingTest, CountMinBalTest) {
  int count = customers.countByMinBalance(320);
  EXPECT_EQ(4, count);
}
TEST_F(BillingTest, RemoveCustomerTest) {
  customers.removeCustomerbyID(1005);
  //EXPECT_EQ(NULL, customers.findCustomerById(1005));
  EXPECT_EQ(5, customers.countAll());
}


}
int main(int argc, char **argv)
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }// namespace
