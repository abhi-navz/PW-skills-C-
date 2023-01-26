// Q6 - Write a C++ program to swap two numbers with the help of a third variable.
#include<iostream>
using namespace std;

int main()
{
    int x=2,y=4;

    // Swapping variables using third variable temp.
    int temp=x;
    x=y;
    y=temp;
    cout<<x<<" "<<y<<endl;
    return 0;
}