#include "Sort.h"
#include <iostream>
#include <cstring>
#include <random>
#include <stdarg.h>

using namespace std;

void interschimb (int &a, int &b)
{
    int aux;
    aux=a;
    a=b;
    b=aux;
}

// constuctors
    Sort :: Sort(int n, int min, int max)
    {
        this->n=n;
        v[0]=min;
        v[n-1]=max;
        int i;
        for(i=1; i<(n-1); i++)
            v[i]=rand()%(max-min+1)+min;//reducem intervalul de numere pozitive la diferenta dintre ele si se aduna min, ca sa fie peste
    }

    Sort:: Sort() : n(5), v{23 ,45, 12, 51,6}
    {
        
    }


    Sort :: Sort(int n, int v[])
    {
        this->n=n;
        int i;
        for(i=0; i<n; i++)
        {
            this->v[i]=v[i];
        }
    }
    Sort :: Sort(int n, ...)//pentru asta e stdarg.h
    {
        this->n=n;
        int i;
        va_list next;
        va_start(next, n);
        for(i=0; i<n; i++)
        {
            v[i]=va_arg(next, int);
        }
    }
    Sort :: Sort(char a[])
    {
        n=0;
        int i=0, c;
        while(a[i])
        {
            c=0;
            while(a[i]!=',')
            {
                c=c*10+(a[i]-'0');
                i++;
            }
            i++;
            v[n++]=c;
        }
        n--;
    }
    // methods

void Sort :: InsertSort(bool ascendent)
{
    int i, j, aux;
    for ( i = 0; i < n; ++i) {
        aux = v[i];
        j = i - 1;

        while (j >= 0 && v[j] > aux && !ascendent) {
            v[j + 1] = v[j];
            j = j - 1;
        }
        while (j >= 0 && v[j] < aux && ascendent) {
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j + 1] = aux;
    }
}
void Sort :: QuickSort(int st, int dr, bool ascendent)
{
    int pivot=dr, i=st, j=st;
    if(st<dr)
    {
        while(j<pivot)
        {
            if(v[j]>v[j+1] && ascendent)
                interschimb(v[j], v[j+1]);
            else
                if(v[j]<v[j+1] && !ascendent)
                    interschimb(v[j], v[j+1]);
            j++;
            if(v[i+1]<v[pivot] && ascendent)
                i++;
            else
                if(v[i+1]>v[pivot] && !ascendent)
                    i++;
        }
        interschimb(v[i+1], v[pivot]);
        QuickSort(st, i, ascendent);
        QuickSort(i+2, dr, ascendent);
    }
}
void Sort :: BubbleSort(bool ascendent)
{
    int ok=0, i=0, j, n=this->n;
    do{
        ok=1;
            for(j=i+1; i<n; i++)
                if(v[i]>v[j]&&ascendent)
                {
                    interschimb(v[i], v[j]);
                    ok=0;
                }
                else
                    if(v[i]<v[j] && !ascendent)
                    {
                        interschimb(v[i], v[j]);
                        ok=0;
                    }
        i++;
    }while(!ok);   
}
void Sort :: Print()
{
    int i;
    for(i=0; i<n; i++)
        cout<<v[i]<<' ';
}
int  Sort :: GetElementsCount()
{
    return n;
}
int  Sort :: GetElementFromIndex(int index)
{
    return v[index];
}