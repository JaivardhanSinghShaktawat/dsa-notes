/*
--> What is TypeCasting ? 
    The conversion of one data type into another data type is called as typecasting.

    implicit typecasting : it is done by compiler
    explict typecasting : it is done manually by user.

    int a = 10 ; 
    char c = "a" ; 
    a = c ; // implicit typecasting.The character c ascii value which is 97 will get stored.

    cout << a << endl ; // Output : 97

    Data Lose Concept 

    Note : if you are converting higher data type to lower data type than data might
    lost.

    ex : double d = 97.2323232 ; 
    char c = (double)d; 

    cout << c << endl ; // Output : a

    double d = 97.345343434 ; 
    int i = (double)d ; 
    cout << i << endl ; // Output : 97

*/

#include<iostream>
using namespace std ; 

int main(){
    int a = 10 ; 
    char c = 'b' ; 
    a = c ; 
    cout << a << endl ; // Output : 98  
    return 0 ; 
}