#include <iostream>
using namespace std;

class Book{
    public:
        Book();
        Book(const string& new_title, const string& new_author, const int new_page_count, const bool digital = 0);
        void setTitle(const string& new_title);
        string getTitle() const;
        void setAuthor(const string& new_author);
        string getAuthor() const;
        void setPageCount(const int new_page_count);
        int getPageCount() const;
        void setDigital();
        bool isDigital() const;
    
    private:
        string title_;
        string author_;
        int page_count_;
        bool digital_;

};