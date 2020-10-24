#include "account.h"
#include "creditacc.h"

#include <iostream>
creditacc::creditacc():name(""),acc_number(""),balance(0.0),id(0){}

creditacc::creditacc(std::string n,std::string a,double b,int i,int t):account(n,a,b,i,t){}

creditacc::creditacc(std::string n,std::string a,double b):account(n,a,b){}



std:: string creditacc::getName()
{
    return name;
}
std:: string creditacc::getacc_number()
{
    return acc_number;
}
double creditacc::getbalance()
{
    return balance;
}

int creditacc::getid()
{
    return id;
}

void creditacc:: display()
{
    std:: cout << name <<","<<acc_number<<"," << balance<< ","<< id << std::endl;
}

double creditacc:: debit(double cost)
{
     if (balance<(-10000))
     {
     	std::cout<<"limit crossed";
     	}
     else
     {
     	balance=balance-cost;
     	}
     return balance;
}
double creditacc:: credit(double cost)
{
     balance=balance+cost;
     return balance;
}
