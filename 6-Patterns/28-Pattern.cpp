/*
Print the below pattern

For n = 5 , below is the pattern

   *
  * * 
 * * *
* * * *
* * * *
 * * *
  * *
   *

*/

#include<iostream>
using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 

    // Part First 

    for(int row = 1 ; row <= n ; row++){
        for(int space = 1 ; space <= (n - row) ; space++){
            cout << " " ; 
        }
        for(int col = 1 ; col <= row ; col++){
            cout << "* " ;
        }
        cout << endl ; 
    }

    // Part Second 

    for(int row = 1 ; row <= n  ; row++){
        for(int space = 1 ; space < row ; space++){
            cout << " " ; 
        }
        for(int col = 1 ; col <= (n - row + 1) ; col++){
            cout << "* " ;
        }
        cout << endl ; 
    }

    return 0 ; 
}