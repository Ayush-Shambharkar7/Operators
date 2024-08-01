#include<iostream>
using namespace std;

int main(){
    int i;
    int num;
    int table;
    cout << "enter the value of num:";
    cin >> num ;

    
    for (i = 1; i <= 10 ; i++)
    {
        table = num * i;
        cout << num << " * " << i << " = " << table << endl;
    }
    

    return 0;
}

/*
enter the value of num:16
16 * 1 = 16
16 * 2 = 32
16 * 3 = 48
16 * 4 = 64
16 * 5 = 80
16 * 6 = 96
16 * 7 = 112
16 * 8 = 128
16 * 9 = 144
16 * 10 = 160
*/


