#ifndef MOVIE_H
#define MOVIE_H
class Movie
{
    char name[256];
    int ReleaseYear;
    double IMDB;
    int length;
public:
    void set_name(const char *name);
    void set_score(double score);
    void set_year(int year);
    void set_length(int length);
    char * get_name();
    double get_score();
    int get_year();
    int get_length();
    int get_years_since(int x);
};
#endif