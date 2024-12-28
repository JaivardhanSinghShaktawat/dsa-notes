/*
Print the below pattern


* * * * * * * *
* * *     * * *
* *         * *
*             *
*             *
* *         * *
* * *     * * *
* * * * * * * *

*/

#include<iostream>
using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 

    // Part First 

    for(int row = 1 ; row <= n ; row++){
        for(int col = 1 ; col <= (n - row + 1) ; col++){
            cout << "* " ; 
        }
        for(int space = 1 ; space <= ((row - 1) << 1) ; space++){
            cout << "  " ; 
        }
        for(int col = 1 ; col <= (n - row + 1) ; col++){
            cout << "* " ; 
        }
        cout << endl ; 
    }

    // Part Second 

    for(int row = 1 ; row <= n ; row++){
        for(int col = 1 ; col <= row ; col++){
            cout << "* " ; 
        }
        for(int space = 1 ; space <= ((n - row) << 1) ; space++){
            cout << "  " ; 
        }
        for(int col = 1 ; col <= row ; col++){
            cout << "* " ; 
        }
        cout << endl ; 
    }

    return 0 ; 
}