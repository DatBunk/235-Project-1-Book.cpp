#include <iostream>
using namespace std;
/**
Ildefonso Marrero, 2/7/2023, 
make a class called book which contains multiple different variable within the class such as author,
*/

class Book{
    public:
/**
Default constructor.
Default-initializes all private members. Booleans are default-initialized to False.
*/
        Book();
        Book(const string& new_title, const string& new_author, const int new_page_count, const bool digital = 0);
/**
@param  : the title of the Book
@post   : sets the Book's title to the value of the parameter
*/
        void setTitle(const string& new_title);
/**
@return : the title of the Book
*/
        string getTitle() const;
/**
@param  : the name of the author of the Book
@post   : sets the Book's author to the value of the parameter
*/
        void setAuthor(const string& new_author);
/**
@return : the author of the Book
*/
        string getAuthor() const;
/**
@param  : a positive integer page count
@pre    : page count > 0 - books cannot have a negative number of pages
@post   : sets the page count to the value of the parameter
*/
        void setPageCount(const int new_page_count);
/**
@return : the page count
*/
        int getPageCount() const;
/**
@post   : sets the digital flag to true
*/
        void setDigital();
/**
@return true if the book is available in digital form, false otherwise
*/
        bool isDigital() const;
    
    private:
        string title_;
        string author_;
        int page_count_;
        bool digital_;

};


int main(){

    Book knife("Cleaning Knives", "Fonzo Marrero", 24, 1);
    

    cout<<"Title? "<<knife.getTitle()<<endl;
    cout<<"Author? "<<knife.getAuthor()<<endl;
    cout<<"Pages? "<<knife.getPageCount()<<endl;
    cout<<"Digital? "<<knife.isDigital()<<endl;

    return 0;
}
