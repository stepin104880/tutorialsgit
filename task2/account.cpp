#include "account.h"
#include <iostream>
#include<list>
account::account():name(""),acc_number(""),balance(0.0),id(0){}

account::account(std::string n,std::string a,double b,int i,int t):name(n),acc_number(a),balance(b),id(i),m_type(t){}

account::account(std::string n,std::string a,double b):name(n),acc_number(a),balance(b){}


int account::getType()
{
	return m_type;
}

