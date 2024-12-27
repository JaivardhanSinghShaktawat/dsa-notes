/*
Print the below pattern

        A
      A B
    A B C
  A B C D
A B C D E

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
        for(int star = 1 ; star <= row ; star++){
            cout << (char)('A' + star - 1) << " " ; 
        }
        cout << endl ; 
    }

    return 0 ; 
}