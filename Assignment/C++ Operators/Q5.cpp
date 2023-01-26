//Q5 - write a program to calculate the sum of digits of a 3 digit number.
#include <iostream>
using namespace std;
int main()
{
int n, first, second, third,sum;
n = 524;
/*Take out each digit of this number and then finally add the digits*/
first = n/100; //first digit
n = n%100;
second = n/10; //second digit
third = n%10; //third digit
sum = first + second + third;
cout << "sum of 3 digits is: " << sum << endl;
return 0;
}