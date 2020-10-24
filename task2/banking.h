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
