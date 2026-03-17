#ifndef SORT_H
#define SORT_H
class Sort
{
    // add data members
    int n;
    int v[256];
public:
    // constuctors
    Sort(int n, int min, int max);
    Sort();
    Sort(int n, int v[]);
    Sort(int n, ...);
    Sort(char a[]);
    // methods
    void InsertSort(bool ascendent=false);
    void QuickSort(int st, int dr, bool ascendent);
    void BubbleSort(bool ascendent=false);//parametru default
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
};
#endif