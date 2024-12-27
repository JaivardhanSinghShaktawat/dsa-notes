/*
Print the below pattern

5
5 4
5 4 3
5 4 3 2
5 4 3 2 1

*/

#include<iostream>
using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 
    for(int row = 1 ; row <= n ; row++){
        for(int col = 1 ; col <= row ; col++){
            cout << (n - col + 1) << " " ; 
        }
        cout << endl ; 
    }

    return 0 ; 
}