/*
-------------------------------- Loops --------------------------------------------

--> When we have to do some tasks repetetively than we use loops.For iteration or
    for repetitive tasks we use loops.
    When we have to repeat some tasks than we use loops.

    Whenever we want to execute a block of code again and again than we use loops.

    Loops are used to repeat a block of code until a certain condition does'nt becomes
    false.

    An itertion is defined as the one time the loop is executed.

    3rd iteration means 3rd time the loop is run.

    break exits the current running loop.
    continue skips the current iteration and go to the next iteration.

    In C++ , 0 is considered as false and everything other is considered true.

    There are three types of loops in C++.

    1. while loop
    2. do while loop
    3. for loop

    Mostly we use for loop.

    while(condition(true/false)){
        // code
    }

    do{
        // code
    }while(condition(true /false));

--> Printing first n numbers.
  
    int i = 0 ; 
    while(i++ < n){
        cout << i << " " ; 
    }

    Note : In do while loop the do block is execute first and then the while 
    condition is checked.

    Note : We use do while loop when we have to run the code at least once even if 
    the condition is false.

    The main difference between do while and while loop is that while loop runs only if 
    the condition is true whereas do while runs at least once even if the condition is 
    false because the block is executed first and than the condition is checked.


    for(intialilzation ; condition ; updation){
        // code
    }

    We can intialize multiple variables and we can write multiple conditions.

    for(int i = 1 , j = 0 , k = i+1 ; i < 10 && j < i ; i++ , j+=2 , k+=5){
      cout << "hello world" << endl ; 
    }

    Initialization : Assigning some value to the variable.
    The initialization happens only during the first time only.
    Condition : If the condition is false than loop exits else it runs the code that is
    written inside the {} of for loop.
    updation : We update the variable.
    {} : It is the scope of the for loop.All the logic of for loop is present inside this
    code blocks only.

    How for loop works ? 
    During the first iteration the initialization is done and the variables within
    the for loops are created (if created in initializatin place).After initialization
    the condition is checked and if the condition is true than the code is executed.
    For all the iteration except first iteration , the updation happens , than
    condition is checked and than the code is executed and this things go on.

    For the first iteration the initialization happens and then the condition is checked.
    After that if conditon is false than loop exits else it runs the code.From the 
    second iteration the updation happens and than the condition is checked and than
    the code is executed if condition is true.So this thing goes again and again.
    The initialization happens only first time during the first iteration.


    updation , condition check and the code execution is called one iteration.

    // Inifinite for loop
    for(; ; ){
        // code
    }

*/

#include<iostream>
using namespace std ; 

int main(){
    // print numbers from 1 to 5

    for(int i = 1 ; i <= 5 ; i++){
        cout << i << endl ; 
    }

    // print squares from 1 to n

    int n ; 
    cin >> n ; 
    for(int i = 1 ; i <= n ; i++){
        cout << i*i << endl ; 
    }

   // print n natural numbers.

   int num ; 
   cin >> num ; 

   for(int i = 1 ; i <= num ; i++){
    cout << i << endl ; 
   }

   // print even numbers from till 20

   for(int i = 2 ; i <= 20 ; i = i + 2){
    cout << i << endl ; 
   }

   // print number from 101 to 200
   
   for(int i = 101 ; i <= 200 ; i++){
    cout << i << endl ; 
   }

   // print number from 10 to 1 in reverse direction

   for(int i = 10 ; i >= 1 ; i--){
    cout << i << " " ; 
   }

   // print numbers from 1 to 100 with a difference of 3

   for(int i = 1 ; i <= 100 ; i = i + 3){
    cout << i << " " ; 
   }

    return 0 ; 
}