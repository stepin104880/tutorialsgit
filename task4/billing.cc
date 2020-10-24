#include "billing.h"
#include "customer.h"
#include "prepaid.h"
#include "postpaid.h"

#include <list>
#include <iterator>
#include <algorithm>
#include <utility>
#include <numeric>

void MobileBilling::addCustomer(int id,std::string name,std::string phn,double bal)
{
    cust.push_back(PrepaidCustomer(id,name,phn,bal));
}

void MobileBilling::removeCustomerbyID(int id)
{
    //std::list<PrepaidCustomer> :: iterator iter;

    auto var = std::find_if(cust.begin(),cust.end(),[=]( PrepaidCustomer& r1){ return (r1.getCustomerId()==id);});
   
    cust.erase(var);   

}

PrepaidCustomer* MobileBilling:: findCustomerById(int id)
{
     //std::list<PrepaidCustomer> :: iterator iter;

    auto var=std::find_if(cust.begin(),cust.end(),[id] (PrepaidCustomer& r1){ return (r1.getCustomerId()==id);});
    
    return &(*var);

}
PrepaidCustomer* MobileBilling:: findCustomerByPhone(std::string phn)
{
    //std::list<PrepaidCustomer> :: iterator iter;

    auto var=std::find_if(cust.begin(),cust.end(),[phn] (PrepaidCustomer& r1){return !(r1.getPhone().compare(phn));});

    return &(*var);
}
double MobileBilling:: findAverageBalance()
{
    double sum=0,result=0;

    result=accumulate(cust.begin(),cust.end(),0,[=] (int i,PrepaidCustomer& r1){return r1.getBalance()+i;});

    return result/cust.size();

}
double MobileBilling:: findMaxBalance()
{
    auto maxBal=std::max_element(cust.begin(),cust.end(),[=] (PrepaidCustomer& r1,PrepaidCustomer& r2){return (r1.getBalance()<r2.getBalance());});

    return (maxBal->getBalance());

}

int MobileBilling:: countByMinBalance(double minval)
{
    //int count=0;

    auto var=std::count_if(cust.begin(),cust.end(),[=] (PrepaidCustomer& r1){ return (r1.getBalance()>=minval);});

    return var;
}

int MobileBilling:: countAll()
{
   return cust.size();
}

