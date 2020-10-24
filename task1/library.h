#ifndef __LIBRARY_H_
#define __LIBRARY_H_
#include<iostream>
#include<list>
#include<string>
#include<algorithm>
#include "book.h"
class Library {
  std::list<Book>books;
  public:
  void addBook(int id, std::string title, std::string author, std::string publisher, double price, int pages);
  Book* findBookById(int id);
  //void displayAll();
  void removeBookById(int id);
  double findAveragePrice();
  Book* findBookWithMaxPages();  
  Book* findAllBooksByAuthor(std::string);
	int countall();
};
#endif
