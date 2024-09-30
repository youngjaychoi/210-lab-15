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

    void print() const {
        cout << "Movie: " << title << endl;
        cout << setw(19) << "Year released: " << year << endl;
        cout << setw(18) << "Screenwriter: " << writer << endl;
    }
};

void readFile(vecotr<Movie> &movies, const string &inFile);

int main()
{
    vector<Movie> movies;

    string inFile = "C:/code/Movie.txt";
    readFile(movies, inFile);




    return 0;
}

void readFile(vecotr<Movie> &movies, const string &inFile) {
    ifstream file(inFile);
    if (!file.is_open()) {
        cout << "Error! not opened" << endl;
        return;
    }

    string title, writer;
    int year;


}