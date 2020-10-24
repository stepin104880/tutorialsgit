
#include "prepaid.h"
#include "customer.h"

PrepaidCustomer::PrepaidCustomer():CustomerBase(){m_type = Prepaid;}
PrepaidCustomer::PrepaidCustomer(int id,std::string name,std::string phn,double bal): CustomerBase(id,name,phn,bal){m_type = Prepaid;}
PrepaidCustomer::PrepaidCustomer(int id,std::string name,std::string phn):CustomerBase(id,name,phn){m_type = Prepaid;}

void PrepaidCustomer:: credit(double amount)           //recharge or billPay
{
   recharge(amount);
}
void PrepaidCustomer:: makeCall(double nmins)
{
   m_balance -= nmins*call_rate;
}

void PrepaidCustomer:: recharge(double amount)
{
   m_balance += amount;
}


int  PrepaidCustomer::getCustomerId()
{
    return m_custId;
}

std:: string  PrepaidCustomer:: getCustomerName()
{
    return m_custName;
}
std:: string  PrepaidCustomer::getPhone()
{
    return m_phone;
}
double  PrepaidCustomer:: getBalance()
{
    return m_balance;
}

