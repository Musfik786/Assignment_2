#include <iostream>
using namespace std;
int main()
{
    cout << "Write a program to take the values of two variables a and b from the keyboard and then check if both the conditions 'a < 50' and 'a < b' are true.";
    cout << "\nAns : \n";
        int a,b;
    cout << "Enter the 1st number : ";
    cin >> a;
    cout << "Enter the 2nd number : ";
    cin >> b;
    (a<50) && (a<b) ? cout<<"1" : cout<<"0";
    return 0;
}