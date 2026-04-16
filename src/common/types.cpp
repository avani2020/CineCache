#pragma once
#ifndef TYPES_CPP
#define TYPES_CPP

#include <string>
using namespace std;

// Stores the data for one movie.
struct Movie {
    int id;
    string title;
    int year;
    double rating;
    string genre;
    string director;
    string description;

    Movie() : id(0), year(0), rating(0.0) {}

    Movie(int i, const string& t, int y, double r, const string& g,
          const string& d, const string& desc)
        : id(i), title(t), year(y), rating(r), genre(g), director(d), description(desc) {}
};

#endif
