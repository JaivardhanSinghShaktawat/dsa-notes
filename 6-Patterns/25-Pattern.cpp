/*
Print the below pattern


* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

*/

#include<iostream>
using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 
    for(int row = 1 ; row <= n ; row++){
        for(int space = 1 ; space < row ; space++){
            cout << "  " ; 
        } 
        for(int star = 1 ; star <= (((n-row) << 1) + 1) ; star++){
            cout << "* " ; 
        }
        cout << endl ; 
    }
    return 0 ; 
}