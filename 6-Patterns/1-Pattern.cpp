/*
Print the below pattern

10 10 10 10 10
10 10 10 10 10
10 10 10 10 10
10 10 10 10 10
10 10 10 10 10

*/

#include<iostream>
using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 
    for(int row = 1 ; row <= n ; row++){
        for(int col = 1 ; col <= n ; col++){
            cout << "10 " ; 
        }
        cout << endl ; 
    }
    return 0 ; 
}