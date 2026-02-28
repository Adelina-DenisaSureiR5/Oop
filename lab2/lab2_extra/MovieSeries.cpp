#include "MovieSeries.h"
#include "func.h"
//#include "Movie.h"
#include <iostream>
void MovieSeries :: init()
{
    count=0;
}
bool MovieSeries :: add(Movie * a)
{
    if(count<16)
    {    
        v[count++]=a;
        return true;
    }
    return false;
}
    
void MovieSeries :: sort()
{
    int i, j;
    Movie *aux;
    for(i=0; i<count-1; i++)
        for(j=i+1; j<count; j++)
            if(movie_compare_passed_years(*v[i], *v[j])==-1)//nu stiu acum ce sa ii fac aici
            {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
}
void MovieSeries :: print()
{
    int i;
    for(i=0; i<count; i++)
        std::cout<<v[i]->get_name()<<" "<<v[i]->get_length()<<" "<<v[i]->get_score()<<" "<<v[i]->get_year()<<'\n';
}