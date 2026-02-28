#include "header.h"
#include<string.h>

void Student :: set_name(const char *name)
{
    strcpy(this->name, name);
}

void Student :: set_grade_math(float x)
{
    if(x<=10&&x>=1)
    math=x;
    else
    math=10;
}

void Student :: set_grade_eng(float x)
{
    if(x<=10&&x>=1)
    eng=x;
    else
    eng=10;
}

void Student :: set_grade_hist(float x)
{
    if(x<=10&&x>=1)
    hist=x;
    else
    hist=10;
}

char * Student :: get_name()
{
    return name;
}
    
float Student :: get_grade_math()
{
    return math;
}

float Student :: get_grade_eng()
{
    return eng;
}

float Student :: get_grade_hist()
{
    return hist;
}

float Student :: avg_grade()
{
    return (math+hist+eng)/3;
}