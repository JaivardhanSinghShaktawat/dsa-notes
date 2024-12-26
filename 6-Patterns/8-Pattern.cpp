/*
Print the below pattern

a b c d e
a b c d e
a b c d e
a b c d e
a b c d e

*/

#include<iostream>
using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 
    for(int row = 1 ; row <= n ; row++){
        for(int col = 1 ; col <= n ; col++){
            cout << (char)('a' + col - 1) << " " ; 
        }
        cout << endl ; 
    }
    return 0 ; 
}
