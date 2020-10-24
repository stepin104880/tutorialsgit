#ifndef __PREPAID_H
#define __PREPAID_H

#include<string>
#include<cstdint>

#include "customer.h"


class PrepaidCustomer : public CustomerBase
 {

  void recharge(double);

  public:

  PrepaidCustomer();
  PrepaidCustomer(int,std::string,std::string,double);
  PrepaidCustomer(int,std::string,std::string);
  void credit(double);
  void makeCall(double);
  double getBalance();
  int getCustomerId();
  std:: string getCustomerName();
  std:: string getPhone();


};

#endif
