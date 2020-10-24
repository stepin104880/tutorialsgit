
#ifndef __CUSTOMER_H
#define __CUSTOMER_H

#include<string>
#include<cstdint>

enum AccountType {
  Prepaid,
  Postpaid
};
const double call_rate = 1.0;

class CustomerBase
{
 protected:

  int m_custId;
  std::string m_custName;
  std::string m_phone;
  double m_balance;
  AccountType m_type;

  public:

  CustomerBase();
  CustomerBase(int,std::string,std::string,double);
  CustomerBase(int,std::string,std::string);
  //CustomerBase(const CustomerBase&);
  virtual void credit(double)=0;           //recharge or billPay
  virtual void makeCall(double)=0;
  virtual double getBalance();
  virtual int getCustomerId();
  virtual std:: string getCustomerName();
  virtual std:: string getPhone();
  //AccountType get_type();
  void display();
};

#endif
