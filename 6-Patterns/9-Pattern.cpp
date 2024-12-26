/*
Print the below pattern

1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

*/

#include<iostream>
using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 
    for(int row = 1 ; row <= n ; row++){
        for(int col = 1 ; col <= n ; col++){
            cout << ((row-1)*n + col) << " " ; 
        }
        cout << endl ; 
    }
    return 0 ; 
}
