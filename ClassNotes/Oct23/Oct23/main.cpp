//
//  main.cpp
//  Oct23
//
//  Created by Parsa Faraji on 10/23/24.
//

#include <vector>
#include <iostream>
using namespace std;

struct Movie{
    string title;
    short releaseYear;
};

int main() {
    Movie movie  = {"24", 2000};
    cout << movie.title << endl;
    
    // short releaseYear = movie.releaseYear
    // string nameOfMovie = movie.title;
    auto [title, releaseYear]{movie}; //
    int number[5] = {1, 2, 3, 4, 5};
    
    // vectors
    vector<Movie> movies;
    
    // line 30 == line 31
    movies.push_back(movie);
    movies.push_back({"24", 2000});
    
    return 0;
}
