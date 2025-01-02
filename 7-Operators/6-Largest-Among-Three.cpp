/*
Given three integers a , b and c.Find the largest among them.
*/

#include<iostream>
using namespace std ; 

int main(){
    int a , b , c ; 
    cin >> a >> b >> c ; 
    if(!(b > c)) swap(b,c);
    if(a > b) cout << a << endl ; 
    else cout << b << endl ; 

    return 0 ; 
}