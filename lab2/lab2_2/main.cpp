#include <iostream>
#include "header.h"
#include "func.h"
using namespace std;
void sortare(int n, int (*x)(Student, Student), Student v[])
{
    int i, j;
    Student aux;
    for(i=1; i<n; i++)
        for(j=i+1; j<=n; j++)
            if(x(v[i], v[j])==1)
            {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
}
void afisare(Student v[], int n)
{
    for(int i=1; i<=n; i++)
    {
        cout<<v[i].get_name()<<" "<<v[i].avg_grade()<<" "<<v[i].get_grade_eng()<<" "<<v[i].get_grade_hist()<<" "<<v[i].get_grade_math()<<"\n";
    }
}

int main()
{
    Student v[20];
    int i, n, j, c;
    char a[70];
    float x;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cout<<"introduceti numele elevului "<<i<<":\n";
        cin>>a;
        v[i].set_name(a);
        cout<<"introduceti nota elevului "<<v[i].get_name()<<" la engleza:\n";
        cin>>x;
        v[i].set_grade_eng(x);
        cout<<"introduceti nota elevului "<<a<<" la istorie:\n";
        cin>>x;
        v[i].set_grade_hist(x);
        cout<<"introduceti nota elevului "<<a<<" la matematica:\n";
        cin>>x;
        v[i].set_grade_math(x);
    }
    cout<<"pentru ordonarea alfabetica introduceti 1\n";
    cout<<"pentru ordonarea dupa medie introduceti 2\n";
    cout<<"pentru ordonarea dupa nota la engleza introduceti 3\n";
    cout<<"pentru ordonarea dupa nota la istorie introduceti 4\n";
    cout<<"pentru ordonarea dupa nota la matematica introduceti 5\n";
    cin>>c;
    switch (c)
        {
            case 1:
                sortare(n, &cmp_name, v);
                 break;
            case 2:
                sortare(n, &cmp_avg, v);
                break;
            case 3:
                sortare(n, &cmp_eng, v);
                break;
            case 4:
                sortare(n, &cmp_hist, v);
                break;
            case 5:
                sortare(n, &cmp_math, v);
                break;
        }
    afisare(v, n);
    return 0;
}