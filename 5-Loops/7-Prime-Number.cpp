/*
Check if a number is prime or not.

A prime number is a number that is divisible by 1 and itself.
*/

#include<iostream>
using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 
    bool isPrime = true ; 
    for(int i = 2 ; i < n ; i++){
        if(n%i == 0){
            isPrime = false ; 
            break ; 
        }
    }
    if(isPrime) cout << "Prime Number" << endl ; 
    else cout << "Not a prime number" << endl ; 

    return 0 ; 
}