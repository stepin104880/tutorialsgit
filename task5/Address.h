
#ifndef ADDRESS_H_INCLUDED
#define ADDRESS_H_INCLUDED
#include "Contact.h"
#include <iostream>
#include <list>
#include <iterator>

class Address
{
    std::list <Contact> cont;

public:

   void addContact(std::string f_name,std::string l_name,std::string primary,std::string alternate);
   void removeContact(std::string);
   void displayAll();
   std::string findcontactprimarynumber(std::string);
   Contact* allcontactswithmatchingname(std::string,std::string);
   void updatecontactdetails();


};

#endif 

