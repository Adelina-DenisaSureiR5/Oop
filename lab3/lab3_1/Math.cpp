#include "Math.h"
#include <stdarg.h>
#include <cstring>

int Math :: Add(int x, int y)
{
    return x+y;
}

int Math :: Add(int x, int y, int z)
{
    return x+y+z;
}

int Math :: Add(double x, double y)
{
    return (int)(x+y);    
}

int Math :: Add(double x, double y, double z)
{
    return (int)(x+y+z);
}

int Math :: Mul(int x, int y)
{
    return x*y;
}

int Math :: Mul(int x, int y, int z)
{
    return x*y*z;
}

int Math :: Mul(double x, double y)
{
    return (int)(x*y);
}

int Math :: Mul(double x, double y, double z)
{
    return (int)(x*y*z);
}

int Math :: Add(int count,...)
{
    va_list next;
    va_start(next, count);
    int s=0, i;
    for(i=0; i<count; i++)
    {
        s=s+va_arg(next, int);
    }
    return s;
}// sums up a list of integers

char* Math :: Add(const char * a, const char * b)//concatenare
{
    if(!a||!b)
    {
        return nullptr;
    }
    //char *p = new char[256];
    size_t len1 = strlen(a);
    size_t len2 =strlen(b);
    char* p = new char[len1 + len2 + 1];
    while(*a)
    {
        *p=*a;
        p++;
        a++;
    }
    while(*b)
    {
        *p=*b;
        p++;
        b++;
    }
    *p='\0';
    return p;
}