#include "account.h"
#include "savingacc.h"
#include <iostream>
#include<list>
savingacc::savingacc():name(""),acc_number(""),balance(0.0),id(0){}

savingacc::savingacc(std::string n,std::string a,double b,int i,int t):account(n,a,b,i,t){}

savingacc::savingacc(std::string n,std::string a,double b):account(n,a,b){}




std:: string savingacc::getName()
{
    return name;
}
std:: string savingacc::getacc_number()
{
    return acc_number;
}
double savingacc::getbalance()
{
    return balance;
}

int savingacc::getid()
{
    return id;
}

void savingacc:: display()
{
    std:: cout << name <<","<<acc_number<<"," << balance<< ","<< id << std::endl;
}

double savingacc:: debit(double cost)
{
     balance=balance-cost;
     return balance;
}
double savingacc:: credit(double cost)
{
     balance=balance+cost;
     return balance;
}
