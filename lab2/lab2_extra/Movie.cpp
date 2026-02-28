#include "Movie.h"
#include "func.h"
void Movie :: set_name(const char *name)
{
    cpy(this->name, name);
}

void Movie :: set_length(int length)
{
    this->length=length;
}

void Movie :: set_score(double score)
{
    IMDB=score;
}

void Movie :: set_year(int year)
{
    ReleaseYear=year;
}

 char * Movie :: get_name()
 {
    return name;
 }

double Movie :: get_score()
{
    return IMDB;
}

int Movie :: get_year()
{
    return ReleaseYear;
}

int Movie :: get_length()
{
    return length;
}

int Movie :: get_years_since(int x)
{
    return x-ReleaseYear;
}

