#include "account.h"
#include "savingacc.h"
#include "creditacc.h"
#include "banking.h"
#include <gtest/gtest.h>
#include<iostream>
namespace {

class bankTest : public ::testing::Test {

protected:
  void SetUp()
  {
    bnk.addAccount("shivani", "9845012345", 6000.0,101,0);
    bnk.addAccount("nipun", "9845012346", 5000.0,102,1);
    bnk.addAccount("akash", "9845012347", 4000.0,103,0);
    bnk.addAccount("shekar", "9845012348", 3000.0,104,1);
    bnk.addAccount("adi", "9845012349", 2000.0,105,0);
    bnk.addAccount("pooja", "9845012340", 1000.0,106,1);
  }
  void TearDown() {}
  banking bnk;
};

TEST_F(bankTest, AddCustomerTest) 
{
   EXPECT_EQ(3, bnk.findallsavingsaccounts());
 /*
  EXPECT_EQ(103, bnk.creditaccountwithmaximumbalance());
 
  EXPECT_EQ("shiv", bnk.findaccountbyid(102));
 
 
  std::cout<<"I am here at credit"<<std::endl;
  EXPECT_EQ("shivani", bnk.creditaccountwithmaximumbalance());*/
}


}



