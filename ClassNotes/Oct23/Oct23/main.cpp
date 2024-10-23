//
//  main.cpp
//  Oct23
//
//  Created by Parsa Faraji on 10/23/24.
//

#include <vector>
#include <iostream>
using namespace std;

struct Date{
    short year;
    short month;
    short day;
};

struct Movie{
    string title;
    Date releaseYear;
};

int main() {
    Date date = {1984, 6, 1};

    
    // short releaseYear = movie.releaseYear
    // string nameOfMovie = movie.title;
    int number[5] = {1, 2, 3, 4, 5};
    
    Movie movie  = {"24", date};
    Movie movie1 = {"24", {1984, 6, 1}};
    
    // vectors
    vector<Movie> movies;
    
    movies.push_back(movie);
    
    for (auto movie:movies) {
        cout << movie.releaseYear.year << endl;
    }
    
    return 0;
}
