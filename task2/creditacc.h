#ifndef CREDITACC_H_INCLUDED
#define CREDITACC_H_INCLUDED
#include <iostream>
#include "account.h"
#include<list>
class creditacc:public account
{
	std::string name;
	std::string acc_number;
	double balance;
	int id;
	public:
	creditacc();
	creditacc(std::string name,std::string acc_number,double balance,int id,int type);	
	creditacc(std::string name,std::string acc_number,double balance);
	std:: string getName();
	std:: string getacc_number();
	double getbalance();
	int getid();
  	void display();
  	double debit(double);
  	double credit(double);

};

#endif
