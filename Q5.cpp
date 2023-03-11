#include <iostream>
using namespace std;
int main()
{
    cout << "write a program to calculate the sum of digits of a 3 digit number.";
    cout << "\nAns : \n";
    int n, first, second, third,sum;
cout<<"Enter a 5 digit number : ";
cin>>n;
first = n/100; //first digit
n = n%100;
second = n/10; //second digit
third = n%10; //third digit
sum = first + second + third;
cout << "sum of 3 digits is: " << sum << endl;
    return 0;
}
