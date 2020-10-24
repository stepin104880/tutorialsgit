#include "book.h"
#include "library.h"
#include<list>
#include<iterator>
#include<algorithm>
#include<string>
#include<numeric>

void Library::addBook(int id, std::string title, std::string author,
  std::string publisher,double price,int pages) {
  books.push_back(Book(id,title,author,publisher, price,pages)); //Method-2
}
/*
void Library::displayAll() {
  std::for_each(books.begin(),books.end(),[=](Book &ref){return ref.display();});
}
*/
Book* Library::findBookById(int id) {
  auto var =std::find_if(books.begin(),books.end(),[=] (Book& r1)
{ 
	return (r1.getid()==id );
}
);
           return &(*var);
}
void Library::removeBookById(int id) {
auto var =std::find_if(books.begin(),books.end(),[=] (Book& r1)
{ return (r1.getid()==id);}
);
    
          books.erase(var);
}

double Library::findAveragePrice() {
	double avg = accumulate(books.begin(),books.end(),0,[](double rs,Book& r1){return r1.getprice()+rs;});
    	double count=0;
    	count=books.size();
  	double average;
  	average=(avg/count);
  	return average;
}


Book* Library::findBookWithMaxPages() {
 auto var =std::max_element(books.begin(),books.end(),[=] (Book& r1, Book& r2) 
{ return ( r1.getpages() < r2.getpages());}
);
           return &(*var);

}

Book* Library::findAllBooksByAuthor(std::string author) {
   auto var=std::find_if(books.begin(),books.end(),[=] (Book& r1)
{ 
	return (r1.getauthor()==author);
}
);
           return &(*var);
}

int Library::countall(){
	books.size();
}
//std::list<Book> results;
//fetchAllBooksByAuthor(author,results);
//void fetchAllBooksByAuthor(std::string author, std::list<Book>& results);

// __LIBRARY_H



















