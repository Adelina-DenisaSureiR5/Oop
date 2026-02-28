#include "Movie.h"
#include <vector>
class MovieSeries
{
    int count;
    Movie * v[16];
public:
    void init();
    bool add(Movie * a);
    void sort();
    void print();
};