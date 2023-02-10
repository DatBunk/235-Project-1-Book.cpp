#include "Book.hpp"

Book::Book(){
    title_ = "";
    author_ = "";
    page_count_ = 0;
    digital_ = 0;
}

/**
Default constructor.
Default-initializes all private members. Booleans are default-initialized to False.
*/
Book::Book(const string& new_title, const string& new_author, const int new_page_count, const bool new_digital){
    title_ = new_title;
    author_ = new_author;
    page_count_ = new_page_count;
    digital_ = new_digital;
}

/**
@param  : the title of the Book
@post   : sets the Book's title to the value of the parameter
*/
void Book::setTitle(const string& new_title){
    title_ = new_title;
}

/**
@return : the title of the Book
*/
string Book::getTitle() const{
    return title_;
}

/**
@param  : the name of the author of the Book
@post   : sets the Book's author to the value of the parameter
*/
void Book::setAuthor(const string& new_author){
    author_ = new_author;
}

/**
@return : the author of the Book
*/
string Book::getAuthor() const{
    return author_;
}

/**
@param  : a positive integer page count
@pre    : page count > 0 - books cannot have a negative number of pages
@post   : sets the page count to the value of the parameter
*/
void Book::setPageCount(const int new_page_count){
    if(0<new_page_count){
        page_count_ = new_page_count;
    }
}

/**
@return : the page count
*/
int Book::getPageCount() const{
    return page_count_;
}

/**
@post   : sets the digital flag to true
*/
void Book::setDigital(){
    digital_ = 1;
}

/**
@return true if the book is available in digital form, false otherwise
*/
bool Book::isDigital() const{
    return digital_;
}

