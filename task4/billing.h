#ifndef BILLING_H_INCLUDED
#define BILLING_H_INCLUDED

#include "customer.h"
#include "prepaid.h"
#include "postpaid.h"

#include <iostream>
#include <list>
#include <iterator>

class MobileBilling
{
    std::list <PrepaidCustomer> cust;

public:

   void addCustomer(int id,std::string name,std::string phn,double bal);
   void removeCustomerbyID(int);
   PrepaidCustomer* findCustomerById(int);
   PrepaidCustomer* findCustomerByPhone(std::string);
   double findAverageBalance();
   double findMaxBalance();
   int countByMinBalance(double);
   int countAll();

};

#endif
