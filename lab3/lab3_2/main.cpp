#include "Canvas.h"
#include <iostream>
using namespace std;
int main()
{
    Canvas c(25, 28);
    char ch;
    int x, x1, x2, y1, y2, r;
    c.FillCircle(10, 10, 5, 'o');
    cout<<"";
    cin>>x;
    if(x==1)
    {
        cin>>x1>>y1>>x2>>y2>>ch;
        c.DrawRect(x1, y1, x2, y2, ch);
    }
    else
        if(x==2)
        {
            cin>>x1>>y1>>x2>>y2>>ch;
            c.FillRect(x1, y1, x2, y2, ch); 
        }
        else
            if(x==3)
            {
                cin>>x1>>y1>>r>>ch;
                c.DrawCircle(x1, y1, r, ch); 
            }
            else
                if(x==4)
                {
                    cin>>x1>>y1>>r>>ch;
                c.FillCircle(x1, y1, r, ch);
                }
                
    c.Print();
    return 0; 
}