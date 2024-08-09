//Ayush Shambharkar
//23070123034
//Aim - to verify the reversing of PRN.

#include<iostream>
using namespace std;

int main()
{
    int prn,a;

    cout<<"Enter your prn: ";
    cin>>prn;

    while(prn>0)
    {
        a = prn%10;         //modulus of the input by 10 and storing the result in a.
        prn = prn/10;       //dividing the remaining number by 10 and storing it again in the input prn.
        cout<<a;
    }
}

/*
OUTPUT: 
Enter your prn: 23070
07032

Enter yout prn: 123034
430321
*/
