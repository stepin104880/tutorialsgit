#ifndef __POSTPAID_H
#define __POSTPAID_H

#include<string>
#include<cstdint>

#include "customer.h"


class PostpaidCustomer : public CustomerBase
 {
  void billPay(double);
  public:
  PostpaidCustomer();
  PostpaidCustomer(int id,std::string name,std::string phn,double bal);
  PostpaidCustomer(int id,std::string name,std::string phn);
  void credit(double);
  void makeCall(double);
  double getBalance();
  int getCustomerId();
  std:: string getCustomerName();
  std:: string getPhone();


};

#endif
