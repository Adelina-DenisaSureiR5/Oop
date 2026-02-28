#include "NumberList.h"
#include <iostream>
using namespace std;


int main()
{   
    NumberList v;
    int x;
    v.Init();
    do{
    cin>>x;
    }while(v.Add(x));
    // trebuie sa se opreasca mai devreme,sau nu??????
    v.Sort();
    v.Print();
    return 0;
}