#include "func.h"
#include <string.h>
int cmp_name(Student a, Student b)
{
    char *n1, *n2;
    n1=a.get_name();
    n2=b.get_name();
    while((*n1==*n2)&&*n1)
    {
        n1++;
        n2++;
    }
    if(*n1<*n2)
        return -1;
    else
        if(*n1>*n2)
            return 1;
    return 0;
    
}
int cmp_math(Student a, Student b)
{
    float m1, m2;
    m1=a.get_grade_math();
    m2=b.get_grade_math();
    if(m1<m2)
        return -1;
    else
        if(m1==m2)
            return 0;
    return 1;
}
int cmp_eng(Student a, Student b)
{
    float e1, e2;
    e1=a.get_grade_eng();
    e2=b.get_grade_eng();
    if(e1<e2)
        return -1;
    else
        if(e1==e2)
            return 0;
    return 1;
}
int cmp_hist(Student a, Student b)
{
    float h1, h2;
    h1=a.get_grade_hist();
    h2=b.get_grade_hist();
    if(h1<h2)
        return -1;
    else
        if(h1==h2)
            return 0;
    return 1;
}
int cmp_avg(Student a, Student b)
{
    float a1, a2;
    a1=a.avg_grade();
    a2=b.avg_grade();
    if(a1<a2)
        return -1;
    else
        if(a1==a2)
            return 0;
    return 1;
}