#include <iostream>
using namespace std;
int main()
{
    cout << "Write a program to check whether two numbers (entered by user) are equal or not.";
    cout << "\nAns : \n";
    int a,b;
    cout << "Enter the 1st number : ";
    cin >> a;
    cout << "Enter the 2nd number : ";
    cin >> b;
    if (a==b)
    {
        cout<<"Both the numbers are equal.";
    }
    else
    {
        cout<<"Both the numbers are not equal.";
    }
    return 0;
}