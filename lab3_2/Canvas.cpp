#include "Canvas.h"
#include <iostream>
using namespace std;

Canvas:: Canvas(int width, int height)
{
    this->width=width;
    this->height=height;
    this->m=new char * [width];
    for(int i=0; i<width; i++)
        this->m[i]=new char [height];
    Clear();
}

void  Canvas :: DrawCircle(int x, int y, int ray, char ch)
{
    
}

void Canvas :: FillCircle(int x, int y, int ray, char ch)
{

}

void Canvas :: DrawRect(int left, int top, int right, int bottom, char ch)
{
    DrawLine(left, top, right, top, ch);
    DrawLine(right, top, right, bottom, ch);
    DrawLine(right, bottom, left, bottom, ch);
    DrawLine(left, bottom, left, top, ch);
}
void Canvas :: FillRect(int left, int top, int right, int bottom, char ch)
{
    int i;
    for(i=top+1; i<bottom; i++)
        DrawLine(left+1, i, right+1, i, ch);
}
void Canvas :: SetPoint(int x, int y, char ch)
{
    m[x][y]=ch;
}
void Canvas :: DrawLine(int x1, int y1, int x2, int y2, char ch)
{
    int dx, dy, p, xk, yk, aux;
    if(x2<x1)
    {
        aux=x2;
        x2=x1;
        x1=aux;
    }
    if(y2<y1)
    {
        aux=y2;
        y2=y1;
        y1=aux;
    }
    dx=x2-x1;
    dy=y2-y1;
    xk=x1;
    yk=y1;
    if(dx>=dy){
    p=2*dy-dx;
    xk=x1;
    yk=y1;
    while(1)
    {
        if(((xk==x2)&&(yk==y2)))
            break;
        SetPoint(xk, yk, ch);
        if(p>=0)
        {
            yk=yk+1;
            p=p+2*dy-2*dx;}
        else
            p=p+2*dy;
        xk=xk+1;
    }}
    else
    {
        while(yk!=y2)
        {
            SetPoint(xk, yk, ch);
            yk++;
        }
    }
}
void Canvas :: Print() // shows what was printed
{
    int i, j;
    for(i=0; i<width; i++){
        for(j=0; j<height; j++)
            cout<<m[i][j];
    cout<<endl;
}
}
void Canvas :: Clear() // clears the canvas
{
    int i, j;
    for(i=0; i<width; i++)
        for(j=0; j<height; j++)
            m[i][j]=' ';
}

Canvas::~Canvas() {
    for(int i = 0; i < width; i++)
        delete[] m[i];
    delete[] m;
}