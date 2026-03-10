#include "Canvas.h"
int main()
{
    Canvas c(25, 28);
    c.DrawRect(3, 3, 10, 10, 'o');
    c.Print();
    return 0; 
}