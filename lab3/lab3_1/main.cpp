#include "Math.h"
#include <iostream>
#include <cstring>
using namespace std;

int factorial (int n)
{
    int p=1, i=1;
    Math m;
    do{
        p=m.Mul(p, i);
        i++;
        n--;
    }while(n>0);
    return p;
}

int gauss(int n)
{
    int p=0, i=0;
    Math m;
    while(n-i+1){
        p=m.Add(p, i);
        i++;
    }
    return p;
}

int main()
{
    Math m;
    int x; double a, b, c, d;
    char p[101], q[101];
    cout<<"introduceti 1 pentru suma de 2 numere reale, 2 pentru suma de 3 numere reale, 3 pentru suma";
    cout<<" de 3 numere intregi, 4 pentru suma lui gauss pana la n, 5 pentru factorialul lui n, 6 pentru inmultirea a doua numere reale,";
    cout<<" 7 pentru inmultirea a 3 numere reale, 8 pentru inmultirea a 3 numere intregi, 9 pentru concatenarea a 2 siruri si altceva pentru";
    cout<<"adunarea a 4 numere intregi";
    cin>>x;
    if(x==1)
    {
        cin>>a>>b;
        cout<<m.Add(a, b);
    }
    else
        if(x==2)
        {
            cin>>a>>b>>c;
            cout<<m.Add(a, b, c); 
        }
        else
            if(x==3)
            {
                cin>>a>>b>>c;
                cout<<m.Add((int)a, (int)b, (int)c); 
            }
            else
                if(x==4)
                {
                    cin>> x;
                    cout<<gauss(x);
                }
                else
                    if(x==5)
                    {
                        cin>> x;
                        cout<<factorial(x);
                    }
                    else
                        if(x==6)
                        {
                            cin>>a>>b;
                            cout<<m.Mul(a, b);
                        }
                        else
                            if(x==7)
                            {
                                cin>>a>>b>>c;
                                cout<<m.Mul(a, b, c);
                            }
                            else
                                if(x==8)
                                {
                                    cin>>a>>b;
                                    cout<<m.Mul((int)a, (int)b, (int)c);
                                }
                                else
                                    if(x==9)
                                    {
                                        cin>>p>>q;
                                        cout<<m.Add(p, q);
                                    }
                                    else
                                    {
                                        cin>>a>>b>>c>>d;
                                        cout<<m.Add(4, (int)a, (int)b, (int)c, (int)d);
                                    }

    return 0;
}