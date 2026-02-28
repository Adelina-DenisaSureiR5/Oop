#include "func.h"
#include "Movie.h"
void cpy(char *a, const char *b)//unde a destinatie si b este ce se copiaza
{
    while(*b)
    {
        *a=*b;
        a++;
        b++;
    }
    *a=0;
}

int cmp(const char *a, const char *b)
{
    while((*a==*b)&&*a)
    {
        a++;
        b++;
    }
    if(*a<*b)
        return -1;
    else
        if(*a>*b)
            return 1;
    return 0;
}

int movie_compare_name(Movie a, Movie b)
{
    return cmp(a.get_name(), b.get_name());
}
int movie_compare_year(Movie a, Movie b)
{
    if(a.get_year()<b.get_year())
        return -1;
    else
        if(a.get_year()==b.get_year())
            return 0;
    return 1;
}
int movie_compare_score(Movie a, Movie b)
{
    if(a.get_score()<b.get_score())
        return -1;
    else
        if(a.get_score()==b.get_score())
            return 0;
    return 1;
}
int movie_compare_length(Movie a, Movie b)
{
    if(a.get_length()<b.get_length())
        return -1;
    else
        if(a.get_length()==b.get_length())
            return 0;
    return 1;
}
int movie_compare_passed_years(Movie a, Movie b)
{
    int x=movie_compare_year(a, b);
    if(x)
        if(x==-1)
            return 1;
        else
            return -1;
    else
        return 0;
}