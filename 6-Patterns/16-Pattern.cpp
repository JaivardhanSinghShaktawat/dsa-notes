/*
Print the below pattern

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/

#include<iostream>
using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 

    // First Way

    for(int row = 1 ; row <= n ; row++){
        for(int col = 1 ; col <= (n - row + 1) ; col++){
            cout << col << " " ; 
        }
        cout << endl ; 
    }

    // Second Way

    for(int row = n ; row >= 1 ; row--){
        for(int col = 1 ; col <= row ; col++){
            cout << col << " " ;
        }
        cout << endl ; 
    }
    return 0 ; 
}