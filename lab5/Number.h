#ifndef NUMBER_H
#define NUMBER_H
class Number
{
   // add data members
   int base;
   int n;
   char *value;
public:
    
    Number(const char * value, int base); // where base is between 2 and 16
   ~Number();

   // add operators and copy/move constructor
   Number(const Number&& to_move_from);
   Number(const Number& to_copy_from);
   friend Number operator+(Number a, Number b);
   friend Number operator-(Number a, Number b);
   void operator+=(Number b);
   void operator-=(Number b);
   char operator[](int i);
   //relation operators (> , < , >= , <=, ==, etc)
   bool operator>(Number b); // si pentru baze diferite
   bool operator<(Number b);
   bool operator>=(Number b);
   bool operator<=(Number b);
   bool operator==(Number b);
   bool operator!=(Number b);
   void operator=(const char *a);
   void operator=(int a);
   void operator=(Number a);
   void operator--();
   void operator--(Number a);
   void SwitchBase(int newBase);
   void Print();
   int  GetDigitsCount(); // returns the number of digits for the current number
   int  GetBase(); // returns the current base
   int xtodec();
};
#endif