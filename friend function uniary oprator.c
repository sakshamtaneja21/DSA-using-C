#include<conio.h>
#include<iostream>
using namespace std;

// write a program to perform uniary (-) oprator overloding through friend function

class space
{
int x;
int y;

public : void input( int a, int b)
        {
        x=a;
        y=b;
        }
        void display()
        {
        cout<<x <<y;
        }
       friend void oprator - (space & s)

};

void oprator - (space & s)
{
s.x=-s.x;
s.y= -s.y;

}

void main()
{
space s1;
s1.input(10,-20);
s1.display;
-s1;
s1.display;


}
