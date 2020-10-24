

#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED
#include <iostream>

class account
{
	std::string name;
	std::string acc_number;
	double balance;
	int id;
	public:
	int m_type;
	account();
	account(std::string name,std::string acc_number,double balance,int id,int type);	
	account(std::string name,std::string acc_number,double balance);
	int getType();
	virtual std:: string getName()=0;
	virtual std:: string getacc_number()=0;
	virtual double getbalance()=0;
	virtual int getid()=0;
  	virtual void display()=0;
  	//virtual double debit()=0;
  	//virtual double credit()=0;

};

#endif
