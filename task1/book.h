#ifndef __BOOK_H
#define __BOOK_H
#include<iostream>
#include<string>
class Book {
  int m_id;
  std::string m_title;
  std::string m_author;
  std::string m_publisher;
  double m_price;
  int m_pages;
  public:
  Book();
  Book(int, std::string, std::string, std::string, double, int);
  int getid();
  std::string gettitle();
  std::string getauthor();
  std::string getpublisher();
  double getprice();
  int getpages();
};

#endif
