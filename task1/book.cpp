#include "book.h"
#include <iostream>
#include <string>
Book::Book():m_id(0),m_title(""),m_author(""),m_publisher(""),m_price(0),m_pages(0){}

Book::Book(int id, std::string title, std::string author, std::string publisher, double price, int pages): m_id(id),m_title(title),m_author(author),m_publisher(publisher),m_price(price),m_pages(pages){}

int Book::getid()
{
	return m_id;
}

std::string Book::gettitle()
{
	return m_title;
}

std::string Book::getauthor()
{
	return m_author;
}

std::string Book::getpublisher()
{
	return m_publisher;
}

double Book::getprice()
{
	return m_price;
}

int Book::getpages()
{
	return m_pages;
}
