/*
Print the below pattern

1
2 1
3 2 1
4 3 2 1
5 4 3 2 1

*/

#include<iostream>
using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 

    // first way 

    for(int row = 1 ; row <= n ; row++){
        for(int col = 1 ; col <= row ; col++){
            cout << (row - col + 1) << " " ; 
        }
        cout << endl ; 
    }

    // second way 
    for(int row = 1 ; row <= n ; row++){
        for(int col = row ; col >= 1 ; col--){
            cout << col<< " " ; 
        }
        cout << endl ; 
    }
    return 0 ; 
}
