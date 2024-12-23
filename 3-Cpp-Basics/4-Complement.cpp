/*
--> What is 1's complement ? 
    It is nothing but inverting all the bits of a binary number.

    Ex : let a = 5 ; 
    binary of 5 is 0101
    1's complement of 5 is ~5 which is 1010

--> What is 2's complement ? 
  
    2's compelement = one's compelement + 1

    Ex : let a = 5 ;
    binary of 5 is 0101
    1's complement of 5 is ~5 which is 1010

    2's complement = 1010 + 1 ==> 1011

--> How to store negative numbers in memory ? 
    
    Step 1 : Ignore the negative sign.
    Step 2 : Convert the number in binary representation.
    Step 3 : Take 1's complement (flip/invert the bits)
    Step 4 : Add 1 bit.

    Ex : int a = -5 ; 

    5 in binary is 0101
    Taking one's complement : 1111....1010
    Taking two's complement by adding 1
    Adding 1 : 1111....1011 (This is how -5 is stored inside the memory)

    When we try to print it or access it than again we take 2's complement.

    ~1111...1011 = 0100
    Adding 1 : 0100 + 1 = 0101 = 5

    Since the MSB was negative , so -5

    The leftmost bit is called as the MSB or most significant bit.

*/