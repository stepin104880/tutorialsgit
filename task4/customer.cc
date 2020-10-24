
#include"customer.h"
#include <iostream>

CustomerBase::CustomerBase():m_custId(),m_custName(""),m_phone(""),m_balance(0.0){}

CustomerBase::CustomerBase(int id,std::string name,std::string phn,double bal):m_custId(id),
                                                                                       m_custName(name),
                                                                                       m_phone(phn),
                                                                                       m_balance(bal){}


CustomerBase::CustomerBase(int id,std::string name,std::string phn):m_custId(id),
                                                                            m_custName(name),
                                                                            m_phone(phn),
                                                                            m_balance(0){}


double CustomerBase:: getBalance()
{
    return m_balance;
}

void CustomerBase:: display()
{
    std:: cout << m_custId <<","<<m_custName<<"," << m_phone << ","<<m_balance<< ","<< m_type <<std::endl;
}
/*
AccountType  CustomerBase:: get_type()
{
    return m_type;
}
*/

int  CustomerBase::getCustomerId()
{
    return m_custId;
}

std:: string CustomerBase::getCustomerName()
{
    return m_custName;
}
std:: string CustomerBase::getPhone()
{
    return m_phone;
}
