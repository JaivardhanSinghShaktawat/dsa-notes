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
    for(int row = 1 ; row <= n ; row++){
        for(int space = 1 ; space <= (n - row) ; space++){
            cout << "  " ;
        }
        for(int star = row ; star >= 1 ; star--){
            cout << star << " " ; 
        }
        cout << endl ; 
    }

    return 0 ; 
}