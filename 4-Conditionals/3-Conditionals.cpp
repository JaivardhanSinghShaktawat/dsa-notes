/*
--> What are conditionals ? 
    Conditionals are control structures that allows to control the flow of the program
    by executing a certain piece code based on some condition.

--> if(true or false){
     // code
    }else{
      // code
    }

--> Note : > , < , >= , <= , == are comparison operators.

*/

#include<iostream>
using namespace std ; 

int main(){
    // check if package is greater than 1

    int package = 1 ; 
    if(package > 1){
        cout << "join" ; 
    }else{
        cout << "don't join" ; 
    }

    // check if a student is pass or fail

    int marks ; 
    cin >> marks ; 

    if(marks > 33){
        cout << "Pass" << endl ; 
    }else{
        cout << "Fail" << endl ; 
    }

    // compare two variables

    int a , b ; 
    cin >> a >> b ; 
    if(a > b){
        cout << a << " is greater" << endl ; 
    }else {
        if(a == b) cout << "both are equal" << endl ; 
        else cout << b << " is greater" << endl ; 
    }

    // check if number is even or odd

    int n ; 
    cin >> n ; 
    if(n%2 = 1) cout << "odd" ; 
    else cout << "even" ; 

    // check if a number is positive , negative or zero

    int num ; 
    cin >> num ; 

    if(num > 0){
        cout << "number is positive" ; 
    }else if(num < 0){
        cout << "number is negative" ; 
    }else{
        cout << "number is zero" ; 
    }

    // check if a character is vowel or consonant

    char character ; 
    cin >> character ; 

    if(character == 'a' || ch == 'e' || ch == 'i' || ch == 'o' ch == 'u' || character == 'A' || ch == 'E' || ch == 'I' || ch == 'O' ch == 'U'){
        cout << character << " is vowel" << endl ; 
    }
    else{
        cout << character << " is consonant" << endl ; 
    }

    // print weekday

    int weekday ; 
    cin >> weekday ; 

    if(weekday == 1) cout << "Monday" << endl; 
    else if(weekday == 2) cout << "Tuesday" << endl ; 
    else if(weekday == 3) cout << "Wednesday" << endl ; 
    else if(weekday == 4) cout << "Thursday" << endl ; 
    else if(weekday == 5) cout << "Friday" << endl ; 
    else if(weekday == 6) cout << "Saturday" << endl ; 
    else cout << "Sunday" << endl ; 
    
}