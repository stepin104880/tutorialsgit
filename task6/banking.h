/*## Banking class
  * Create a collection of Accounts using suitable STL container (polymorphic container 
    which holds both type of objects)
  * Implement following operations on the collection
    * addAccount
    * removeAccount by id
    * display all accounts
    * find account by id
    * find all savings accounts matching with customer name (sub string match)
    * find average balance in all savings accounts
    * find the credit account with maximum balance
    * count all savings accounts with certain range of balance
    * count all credit accounts whose balance is less than certain limit
*/

#ifndef BANKING_H_INCLUDED
#define BANKING_H_INCLUDED
#include <iostream>
#include <list>
#include "account.h"
#include "savingacc.h"
#include "creditacc.h"
class banking
{
	std::list <savingacc> sav;
	std::list <creditacc> cre;
	
	public:
	void addAccount(std::string,std::string,double ,int,int);
        void removeAccount(int);
   	void displayAll();
   	std::string findaccountbyid(int);
   	int findallsavingsaccounts();
   	std::string creditaccountwithmaximumbalance();
   	
   	
};

#endif
