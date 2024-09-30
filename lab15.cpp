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

void readFile(vector<Movie> &movies, const string &inFile);

int main()
{
    vector<Movie> movies;

    string inFile = "C:/code/Movie.txt";
    readFile(movies, inFile);

    for (size_t i = 0; i < movies.size(); ++i) {
    movies[i].print();
    cout << endl;
}

    return 0;
}

void readFile(vector<Movie> &movies, const string &inFile) {
    ifstream file(inFile);
    if (!file.is_open()) {
        cout << "Error! not opened" << endl;
        return;
    }

    string title, writer;
    int year;

    while (getline(file, writer) && file >> year && file.ignore() && getline(file, title)) {
        Movie movie;
        movie.setWriter(writer);
        movie.setYear(year);
        movie.setTitle(title);
        movies.push_back(movie);
    }

    file.close();
}