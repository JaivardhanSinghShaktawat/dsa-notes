/*
Print the below pattern

* * * * *
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

    // First Way

    for(int row = 1 ; row <= n ; row++){
        for(int col = 1 ; col <= (n - row + 1) ; col++){
            cout << "* " ; 
        }
        cout << endl ; 
    }

    // Second Way

    for(int row = n ; row >= 1 ; row--){
        for(int col = 1 ; col <= row ; col++){
            cout << "* " ;
        }
        cout << endl ; 
    }
    return 0 ; 
}