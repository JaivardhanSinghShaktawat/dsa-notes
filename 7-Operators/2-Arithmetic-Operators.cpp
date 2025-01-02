/*
--> What are arithmetic Operators ? 
    They are mathematical operators used for calculations.

    a. unary : they need one operand to work.
    Ex : ++ and --

    b. binary : they need two operands to work with.
    Ex : + , - , / , * , %

    cout << 5/2 << endl ; // Output : 2

    % is remainder operator or modulus operator.It returns the remainder when a and b
    are divided.

    a%b = remaining remainder.

    cout << 5%2 << endl ; // Output : 1

    Priority of data types

    double > float > int

    float/int = int
    double/float = double
    int/int = int
    double/int = double

    cout << 12.4/3 << endl ; // Output : 3.1

-->  Note : {*,/,%} have same precedence.
     {+ , -} have same precedence.


     {*,/,%} have more precdence than {+,-}
     {*,/,%} > {+,-}

     Note : arithmetic operators are executed from left to right.

--> ++ and -- Operators : They increment or decrement the value by one.

    INCREMENT OPERATOR

    1. Post Increment (a++) : If they are used in an expression or assigned to someone than
    first the expression is evaluated or the value is assigned and than they are incremented.

    Post increment means use first and than increment the value.

    2. Pre Increment (++a) : In pre increment the value is first incremented and than
    they are used in expressions or for assigning to other variables.

    Pre increment means increment the value first and than use.

    DECREMENT OPERATOR

    1. Post Decrement (a--) : If they are used in an expression or assigned to someone than
    first the expression is evaluated or the value is assigned and than they are 
    decremented.

    Post decrement means use first and than decrement the value.

    2. Pre Decrement (--a) : In pre decrement the value is first decremented and than
    they are used in expressions or for assigning to other variables.

    Pre decrement means decrement the value first and than use.


    int a = 9 ; 
    cout << ++a << endl ; // Output : 10

    cout << a++ << endl ; // Output : 10
    cout << a << endl ; // Output : 11

*/

#include<iostream>
using namespace std ; 

int main(){
    int a = 9 ; 
    cout << ++a << endl ; // Output : 10
    cout << a++ << endl ; // Output : 10
    cout << a << endl ; // Output : 11
    return 0 ; 
}