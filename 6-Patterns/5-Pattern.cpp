/*
Print the below pattern

5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1

*/

#include<iostream>
using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 

    // first way 

    for(int row = 1 ; row <= n ; row++){
        for(int col = 1 ; col <= n ; col++){
            cout << (n - col + 1) << " " ; 
        }
        cout << endl ; 
    }

    // second way 
    for(int row = 1 ; row <= n ; row++){
        for(int col = n ; col >= 1 ; col--){
            cout << col<< " " ; 
        }
        cout << endl ; 
    }
    return 0 ; 
}
