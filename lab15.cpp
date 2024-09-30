#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
using namespace std;

class Movie {
private:
    string title;
    int year;
    string writer;
public:
    string getTitle() const             { return title; }
    int getYear() const                 { return year; }
    string getWriter() const            { return writer; }
    
    void setTitle(const string &t)      { title = t; }
    void setYear(int y)                 { year = y; }
    void setWriter(const string &w)     { writer = w; }

    void print() 