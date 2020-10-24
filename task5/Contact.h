#ifndef __CONTACT_H
#define __CONTACT_H
#include<iostream>
#include<string>
#include<cstdint>  
class Contact
{
	std::string f_name;
	std::string l_name;
	std::string primary;
	std::string alternate;
	public:
	Contact();
	Contact(std::string f_name,std::string l_name,std::string primary,std::string alternate);	
	Contact(std::string f_name,std::string l_name,std::string primary);
	std:: string getfName();
	std:: string getlName();
	std:: string getPrimary();
  	void display();
};

#endif
