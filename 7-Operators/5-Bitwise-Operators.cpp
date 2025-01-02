/*
--> Bitwise Operators

    1. Bitwise And (&) : If all the bits are 1 , than the output will be 1 else if any one
    bit is 0 than the output will always 0.

    x    y      output
    1    1        1
    0    1        0
    0    0        0
    1    0        0


    cout << (5&10) << endl ; // Output : 0

     5 : 0101
        &
     10: 1010 

    = 0000 ==> 0

    2. Bitwise OR (|) : If any one bit is 1 , than the output will be 1 else the output will
    be 0.

    x    y      output
    1    1        1
    0    1        1
    1    0        1
    0    0        0

    cout << (5|10) << endl ; // Output : 15

     5 : 0101
        |
     10: 1010 

    = 1111 ==> 15


    3. Bitwise XOR (^) : It is the another version of OR operator.If all the bits are same
    than output will be 0 else the output will be 1.XOR is called as exclusive OR operator.
    Agar saari bit same type ki h than output will be 1 else the output will be 0.

    x    y      output
    1    1        0
    0    0        0
    1    0        1
    0    1        1

    cout << (5^10) << endl ; // Output : 15

     5 : 0101
        ^
     10: 1010 

    = 1111 ==> 15

    int x = 5 , y = -5 ; 

    cout << (x^y) << endl ; // Output : -2

    5 binary rerpesentation : 0101
    -5 binary representation : remove sign ==> 5 (0101)
                               take one's complement : 111111....1010
                               take two's complement : 111111....1011

    So now in memory -5 is stored like this 1111111....1011 and 5 is 0000000......0101

    11111111.....1011   (-5)
    00000000.....0101 ^  (5)

    11111111.....1110

    So the XOR of -5 and 5 is 1111111.....1110

    Now when we will try to read it than compiler will see that it's MSB is 1 so it's a 
    negative number.So compiler will take it's 2's complement.

    11111111......1110  => 00000000......0001 (After taking one's complement)
    00000000......0001 + 1 => 000000.......0010 (After taking two's complement)

    We get 2 , but since the MSB was 1 so compiler will put a negative sign.

    Output : -2

    4. Bitwise NOT (~) : It flips or invert the bits.

    Ex : int x = 5 ; 
    Binary Represenetation of 5 is 0101
    ~x = 1010  (All the bits are flips.The 0 will become 1 and vice versa.)

    x      output
    0        1    
    1        0

    int num = 1 ; 
    ~num ; 

    When we use ~ than all the bits are flipped.

    num = 1 ==> 0000....1
    ~num = 11111..0

    So in memory it is stored like this 111111...0

    Now when we will do cout to read it's value than compiler will see that its a negative
    number because the MSB is 1.So it will take two's complement to read it.

    1111111....0 ==> 00000000..1 (After taking one's complement)
    0000000....1 + 1 ==> 0000000...10 (After taking two's complement)

    Now since we know that it's a negative number so we put a negative sign.

    Output : -2

--> Left And Right Shift Operators

    1. Left Shift Operator (<<) : It shifts the bit in the left direction and it adds 0
    as the padding from the right direction.

    Number << (Number of bits to shift in left direction)

    int a = 2 ; 
    a << 1 ; 
    cout << a << endl ; // Output : 4

    a = 2 which is 0000000000...0010
    a << 1 which is 000000000...0100  (Here the 1 shifted to 2nd position from the 1st position)

    So there is a formula which is a << number ==> a*2^number

    If we shift by a particular number say x.Than all the bits will get shifted in the left
    direction by x times from their position.

    a << n ==> a*2^n

    2. Right Shift Operator (>>) : It shifts the bit in the right direction and adds 0
    as the padding from the left direction.

    Number >> (Number of bits to shift in right direction)

    int a = 5 ; 
    a >> 1 ; 
    cout << a << endl ; // Output : 5

    a = 5 which is 000000000....0101
    a >> 1 which is 00000000....0010 

    So there is a formula which is a >> number ==> a/2^number
*/