/*
Print the below pattern

        1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5

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
            cout << star << " " ; 
        }
        cout << endl ; 
    }

    return 0 ; 
}