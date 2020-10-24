#include "account.h"
#include "savingacc.h"
#include "creditacc.h"
#include "banking.h"
#include <list>
#include <iterator>
#include <utility>
#include<iostream>
#include <algorithm> 
void banking::addAccount(std::string name,std::string acc_number,double balance,int id,int acctype)
{ 
    if(acctype==0)
    sav.push_back(savingacc(name,acc_number,balance,id,acctype));
    else
    cre.push_back(creditacc(name,acc_number,balance,id,acctype));
}


void banking::removeAccount(int id)
{
    std::list<savingacc> :: iterator iter1=sav.begin();
    if(iter1->getType() == 0)
    {
	    for(;iter1!=sav.end();iter1++)
	    {
		if(iter1->getid()== id)
		{
		   sav.erase(iter1);
		   break;
		}
	    }
      }
    else
    {
	    std::list<creditacc> :: iterator iter2;

	    for(iter2=cre.begin();iter2!=cre.end();iter2++)
	    {
		if(iter2->getid()== id)
		{
		   cre.erase(iter2);
		   break;
		}
	    }
    }
    
}
void banking::displayAll() {
	std::list<savingacc> :: iterator iter1 = sav.begin();
       for(; iter1!=sav.end();++iter1)
        	(iter1)->display();
        std::list<creditacc> :: iterator iter2 = cre.begin();
       for(; iter2!=cre.end();++iter2)
        	(iter2)->display();
  }
/*
std::string banking::findaccountbyid(int id)
   {
   std::cout<<"I am in findacc by id"<<std::endl;
    std::list<savingacc> :: iterator iter1=sav.begin();
    std::cout<<iter1->getType();
    std::cout<<iter1->getName();
    std::cout<<iter1->getacc_number();
    if(iter1->getType() == 0)
    {
    std::cout<<"I am in saving"<<std::endl;
	auto var=std::find_if(sav.begin(),sav.end(),[=](savingacc& r1)
      {return(r1.getid()==id);});
      std::cout<<var->getName();
       return var->getName();
      }
    else
    {
     std::cout<<"I am in credit"<<std::endl;
	auto var=std::find_if(cre.begin(),cre.end(),[=](creditacc& r1)
      {return(r1.getid()==id);});
       return var->getName();
    }   
   }
   */
int banking:: findallsavingsaccounts()
{  
        return sav.size();
}
std::string banking:: creditaccountwithmaximumbalance()
{

 auto variable =std::max_element(cre.begin(),cre.end(),[=] (creditacc& r1, creditacc& r2) 
{ return ( r1.getbalance() < r2.getbalance());}
);
	std::cout<<variable->getName();
	
           return variable->getName();
}



































