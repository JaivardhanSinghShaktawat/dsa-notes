/*
--> What are comparison operators ? 
    Comparison operators are used to compare values and they return boolean value which is
    true or false.
    Ex : > , < . == , != , <= , >= 

    {< , > , <= , >= , == , !=} executes from left to right.
*/

#include<iostream>
using namespace std ; 

int main(){
    int a , b ; 
    cin >> a >> b; 

    if(a == b) cout << "yes" ; 
    else cout << "no";

    if(a > b) cout << "yes" ; 
    else cout << "no";

    if(a < b) cout << "yes" ; 
    else cout << "no";

    return 0 ; 
}