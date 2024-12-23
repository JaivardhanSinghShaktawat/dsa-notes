/*
--> What are variables ? 
    Variables are the containers that store data.
    Variables are the names of the memory location where we store data.

    In simply words , variable is a name that we give to memory locations.

    We can use alphabets , numbers , _ and $ to define varible names.
    We cannot use special symbols.

    Always give meaningful names to the variables.

--> What is Data Type ? 
    It is nothing but type of the data like number or characters or string etc.

    1. int : it stores integer.
    It takes 4 bytes in memory or 32bits in memory.

    int x ; // x is a variable of int type
    x = 5 ; 
    The 5 is stored in binary form inside the memory.

    = is assignment operator.

    2. char : it stores character.
    It takes 1 byte which is 8 bit or 8 transistors.
    So suppose we have 8 bits and in each bit we have two option 0 or 1 so total 
    different characters we can store are 2^8 = 256

    So we can store 256 different characters.

    char ch = 'a' ; 

    3. float : it stores decimal or floating point numbers.
    It takes 4 bytes memory.

    float f = 4.5 ; 

    4. double : it stores decimal or floating point numbers but with more precision
    because it takes 8 bytes of memory.

    double d = 4.567 ; 

    It stores larger floating numbers that the float data type can't store.

    5. bool : it stores true or false.
    It takes 1 bytes.If the value is false than all the bits are set to 0 else all the 
    bits are set 1.

    bool a = false ; 

    Note : bool takes 1 byte and not 1 bit because memory is byte addressable 
    which means that byte is the smallest memory which has address.

    6. long int : it stores integers only but it takes 8 bytes to store number.
    It store larger numbers that int data type can't store.

--> Why we write data type while creating variables ? 

    dataType variableName ; 

    int x ; 

    The data type tells the compiler that how many bytes it has two read.If the 
    data type is not specified than compiler will not know that where it has to 
    stop.
    So the data type tells the compiler that how many bytes it has to read from the 
    starting or base address.

    Variable declaration : it means creating a variable.
    Variable initialization : it means variable intializing.

    int a ; // variable a declared
    a = 5 ; // variable a intialized with value 5

*/

#include<iostream>
using namespace std ; 

int main(){
    // varible declare and initialize.
    // int a = 5 , b = 5 , c = 3 , d = 3 , e , f = 34 ; 
    // cout << a << " " << "a" << endl ; 
    // cout << a+b << endl ; 

    // char c = 'a' ; 
    // cout << c ;

    // float f = 2.31 ; 
    // cout << f ; 

    // double d = 3.121 ; 
    // cout << d ; 

    // bool b = true ; 
    // cout << b ; 
    

    return 0 ; 
}