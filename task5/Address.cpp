#include "Address.h"
#include "Contact.h"
#include <list>
#include <iterator>
#include <utility>
#include <algorithm> 
#include <iostream>
void Address::addContact(std::string f_name,std::string l_name,std::string primary,std::string alternate)
{
    cont.push_back(Contact(f_name,l_name,primary,alternate));
}


void Address::removeContact(std::string primary)
{
    std::list<Contact> :: iterator iter;

    for(iter=cont.begin();iter!=cont.end();iter++)
    {
        if(iter->getPrimary()== primary)
        {
           cont.erase(iter);
           break;
        }
    }
}

void Address::displayAll() {
	std::list<Contact> :: iterator iter = cont.begin();
       for(; iter!=cont.end();++iter)
        	(iter)->display();
  }

std::string Address::findcontactprimarynumber(std::string primary)
   {
      auto var=std::find_if(cont.begin(),cont.end(),[=](Contact& r1)
      {return(r1.getPrimary()==primary);});
      return var->getfName();
     
   }
Contact* Address::allcontactswithmatchingname(std::string fname,std::string lname)
{
  auto var =std::find_if(cont.begin(),cont.end(),[=] (Contact& r1)
{ return ( (r1.getfName().compare(fname)) && (r1.getlName()==lname ) );}
);
           return &(*var);
}


