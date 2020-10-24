#include"Contact.h"
#include <iostream>

Contact::Contact():f_name(""),l_name(""),primary(""),alternate(""){}

Contact::Contact(std::string f,std::string l,std::string p,std::string a):f_name(f),l_name(l),primary(p),alternate(a){}

Contact::Contact(std::string f,std::string l,std::string p):f_name(f),l_name(l),primary(p){}

std:: string Contact::getfName()
{
    return f_name;
}
std:: string Contact::getlName()
{
    return l_name;
}
std:: string Contact::getPrimary()
{
    return primary;
}

void Contact:: display()
{
    std:: cout << f_name <<","<<l_name<<"," << primary << ","<< alternate << std::endl;
}


