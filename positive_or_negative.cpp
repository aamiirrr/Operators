//Aamir Ayaan Quraishi
//23070123002
//Aim - to verify whether the give number by the user is positive or negative.

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    if (a>=0)
    {
        cout<<"It is a positive number.";
    }
    else
    {
        cout<<"It is a negative number.";
    }
}

/*
OUTPUT:
Enter a number: 5
It is a positive number.

Enter a number: -6
It is a negative number.
*/
