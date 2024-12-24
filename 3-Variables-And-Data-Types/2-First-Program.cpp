/*
--> The execution of the C++ program starts from the main() function.
    main() is the entry point of a C++ program.
    The main() function is called by the operating system.

    We can use endl or '\n' to move the cursor to the newline.
    "\n" is an escape sequence.Escape sequence starts with "\"

    Example : 

    int main(){

    }

    Even if your write the above code than it will execute with no error because the 
    C++ program starts from the main() function and this function is called by the 
    operating system.

    Function : It is reusable piece/block of code that might take input or not in form of
    parameters or arguements and it might return output or may not.It depends upon the 
    function definition.

    By using function we can implement the DRY principle.
    We can test multiple input values and can get multiple output values by using the
    function.

    Example : 

    int main(){

    }

    Here int is the return type.
    main() is the function name
    { } : This contains the code that is executed inside the main() function.
    They are called as scope of the function or code blocks.

    Header file contains the declaration of the cin and cout and other CPP functions.

    iostream instead for input output stream header file.

--> What are >> and << in C++ ? 

    Note : << is called as insertion operator.This means that we are inserting the
    value in console/screen.

    >> is called as the extraction operator because we are extracting value from the
    console/screen.

--> What is namespace ? 
    namespace defines the scope.In C++ cin and cout have multiple definitions so we need
    to tell compiler that we want cin and cout whose definition is present inside 
    the "std" namespace.

    namespace simply means scope.

    Note : iostream header file contains declaration whereas namespace defines the 
    scope.
    
*/

#include<iostream>
using namespace std ; 

int main(){
   std::cout << "hello world" ; 
//    std::vector<int> v ; 
   cout << "hello world" << "\n" ; 
   cout << "hello world" << endl ; 
   cout << "3*2" ; 
}