/*
Calculate the nth fiboanacci number

A fibonacci number is the sum of it's previous two numbers

fn = fn-1  + fn-2

Fib series : 0 1 1 2 3 5 8 13 21 34 55 89

*/

#include<iostream>
using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 
    if(n <= 1){
        cout << n << endl ; 
        return 0;  
    }
    int secondPrev = 0 , prev = 1 ; 
    int curr = 0 ; 
    for(int i = 2 ; i <= n ; i++){
        curr = prev + secondPrev ; 
        secondPrev = prev ; 
        prev = curr ; 
    }

    cout << curr << endl ; 

    return 0 ; 
}