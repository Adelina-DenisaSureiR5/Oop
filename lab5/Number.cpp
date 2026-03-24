#include "Number.h"
#include <iostream>
#include <cstring>

Number :: Number(const char * value, int base)
{
    this->base=base;
    n=strlen(value)-1;
    strcpy(this->value, value);
}

Number :: ~Number()
{
    delete value;
}
Number :: Number(const Number& to_copy_from)
{
    strcpy(this->value, to_copy_from.value);
    this->base = to_copy_from.base;
    this->n=to_copy_from.n;
}
Number :: Number(const Number&& to_move_from)
{
    this->value = new char[to_move_from.n];
    this->n = to_move_from.n;
    for (unsigned int i = 0; i < to_move_from.n; i++)
        this->value[i] = to_move_from.value[i];
}
void strrev(char *a)
{
    int i, n=strlen(a);
    char aux;
    for(i=0; i<(n-1)/2; i++)
    {
        aux=a[i];
        a[i]=a[i+(n-1)/2];
        a[i+(n-1)/2]=a[i];
    }
}

char inttoc(int a)
{
    if(a<=9)
        return (char)(a+'0');
    else
        return (char)(a+'A'-10);
}

int Number :: xtodec()
{
    int x=0; 
    int i, c=0, p=1, k=0, n=GetDigitsCount();
    if(base<=9)
        for(i=n-1; i>=0; i++)
        {
            x=x+p*(value[i]-'0');
            p*=base;
        }
    else
    {
        int c=0, d=0;
        for(i=n-1; i>=0; i++)
        {
            if(value[i]<='9')
                x=x+p*(value[i]-'0')*d;
            else
                x=x+p*(value[i]-55)*d;
            p*=base;
            d=d*10;
        }
    }
    return x;
}
char* dectox(int dec, int b)
{
    int i, k=0; char *x;
    do{
        x[k++]=inttoc(dec%b);
        dec=dec/b;
    }while(dec);
    strrev(x);
    return x;
}



Number operator+(Number a, Number b)
{
    int x, y, base1=a.GetBase(), base2=b.GetBase();
    x=a.xtodec();
    y=b.xtodec();
    x=x+y;
    if(base1>base2)
        Number rez(dectox(x, base1), base1);
    else
        Number rez(dectox(x, base2), base2);
    return rez;
}
Number operator-(Number a, Number b)
{
    int x, y, base1=a.GetBase(), base2=b.GetBase();
    x=a.xtodec();
    y=b.xtodec();
    x=x-y;
    if(base1>base2)
        Number rez(dectox(x, base1), base1);
    else
        Number rez(dectox(x, base2), base2);
    return rez;
}
char Number :: operator[](int i)
   {
    return value[i];
   }
bool Number :: operator>(Number b)
   {
    int x, y;
    x=xtodec();
    y=b.xtodec();
    if(x>y)
        return true;
    else
        return false;
   }
bool Number :: operator<(Number b)
   {
    int x, y;
    x=xtodec();
    y=b.xtodec();
    if(x<y)
        return true;
    else
        return false;
   }
bool Number :: operator>=(Number b)
{
 int x, y;
 x=xtodec();
 y=b.xtodec();
 if(x>=y)
     return true;
 else
     return false;
}
bool Number :: operator<=(Number b)
{
 int x, y;
 x=xtodec();
 y=b.xtodec();
 if(x<=y)
     return true;
 else
     return false;
}
bool Number :: operator==(Number b)
{
 int x, y;
 x=xtodec();
 y=b.xtodec();
 return x==y;
}
bool Number :: operator!=(Number b)
 {
    int x, y;
    x=xtodec();
    y=b.xtodec();
    return x!=y;
    }
void Number :: operator--()
{
    n--;
}
void Number :: operator--(Number a)
{
    int i;
    for(i=0; i<n; i++)
        value[i]=value[i+1];
    n--;
}
void Number :: operator=(const char* a)
{
    strcpy(value, a);
}
void Number :: operator=(int a)
{
    n=0;
    do{
        value[n++]=a%10;
        a=a/10;
    }while(a);
    strrev(value);
    base=10;
}
void Number :: operator=(Number a)
{
    strcpy(this->value, a.value);
    this->n=a.n;
    this->base=a.base;
}
void Number :: SwitchBase(int newBase)
{
    int x=xtodec();
    strcpy(value, dectox(x, newBase));
    base=newBase;
}
int  Number :: GetDigitsCount()
{
    int i;
    for(i=0; value[i]; i++);
    return i;
}
int  Number :: GetBase()
{
    return base;
}
void Number :: Print()
{
    int i;
    for(i=0; i<=n; i++)
        std::cout<<value[i];
}
void operator +=(Number a, Number b)
{
    Number rez(a+b);
    a=rez.value;
    a.base=rez.base;
}
void operator -=(Number a, Number b)
{
    Number rez(a-b);
    a=rez.value;
    a.base=rez.base;
}