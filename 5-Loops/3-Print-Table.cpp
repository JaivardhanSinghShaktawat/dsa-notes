/*
Print table of n number.
*/

#include<iostream>
using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 
    for(int i = 1 , j = n ; i <= 10 ; i++ , j += n){
        cout << n << " * " << i << " = " << j << endl ; 
    }
    return 0 ; 
}