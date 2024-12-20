/*

--> What is number system ? 
    It is way to represent the numeric values by using digits or symbols.
    Ex : decimal number system (base10)

--> Tally Mark System / Counting using stones.
    
    Before 10,000 years , humans used to count using the tally mark system.
    For example , if a human had 5 goats than it used to carry 5 stones.Now to count the
    cows , the human one by one used move the goat ahead and used to remove one stone.
    Like this it used to do for all the goats , if any stones used to left than 
    human was able to know that if any goat was less or equal to the number of goats.

--> Egypt Number System (Base 60) + Decimal + Arithmetics

    In base 60 , 60 different symbols were used to represent the numeric values.
    
    Note : The counting system was invented by India.The counting system that we 
    used today was developed by India.Decimal number system is of Base 10.The
    decimal number system became famous because the arithmetic operations with 
    decimal number system was very easy.Today we use the Decimal (Base 10) number
    system.

    In decimal number system we use 10 different symbols to represent the numbers.

--> Transistor
    A transistor is a device that stores a charge and is of size 1 bit.A transistor 
    stores either 0 or 1.
    A transistor stores a charge.If it stores charge than it means that it stores 1
    else it stores 0.
    Transistor lead to the binary number system.

    Transistor and binary number system decreased the size of the computer and the
    computers that we use today is because of transistor and binary number system
    only.

    A RAM contains a lot of transisitors that stores charge.

--> Binary Number System
    Binary means 2.A binary number system uses base 2 which means it uses 2 symbols to 
    represent the numeric quantities or values.
    A Binary number is a number which can be 0 or 1.A Binary means 0 or 1.
    Binary number system uses Base 2 because we use only two numbers which are 
    0 and 1.

    0 + 0 = 0
    1 + 0 = 1
    0 + 1 = 1
    1 + 1 = 10 (10 is equal to 2)

    We express 2 in binary number as 10 because we directly can't write 2 in binary
    number.

--> Decimal To Binary Conversion
 
    1. Divide the number by 2.
    2. Store Remainder (That will be a bit in binary number)
    3. Repeat above steps with the quotient until quotient is less than 2.
    4. Reverse the bits or remainder so obtained.

    Let x = 25

    25%2 = 1
    12%2 = 0
    6%2 = 0
    3%2 = 1
    1%2 = 1
    0

    Go from bottom to start

    011001 is equal to 25.

--> Binary To Decimal Conversion

    Let b = 101 

    Convert b in decimal number system.

    1*2^2 + 0*2^1 + 1*2^0 = 4 + 0 + 1 = 5

--> Decimal To Decimal Number.

    let x = 143

    143%10 = 3
    14%10 = 4
    1%10 = 1

    ==> 143 

--> Note : Other number systems are Octadeciaml , Hexadecimal.

    Octa Decimal Number System : It is nothing but Base 8
    {0,1,2,3,4,5,6,7} (Base 8)

    Hexadecimal Number System : It is nothing but Base 16
    {0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F} (Base 16)

    In hexadeciaml number system we use A to F instead of 11 to 16 because suppose 
    in hexadecimal number system A is represented by 11.

    Now when we will try to convert it into hexadecimal than we don't get the same 
    answer.

    let x = 11 ; // x is hexadecimal form
    
    1*16^1 + 1*16^0 = 17

    Here we are getting wrong answer because we are treating 11 as separetely.
    Here 11 is in hexadecimal form and we are converting into hexadecimal only so we
    should get the answer as 11 but we are getting 17.This is because in 11 we have two
    digits and they are treated separately.

    So to solve this problem , after 9 digit or symbol we use characters to treat the
    two digits as single entity.

    If we use B instead of 11 than

    16^0 * B(11) = 11 

    So that's why we use capital letters instead of decimal numbers from 11 to 16 in 
    hexadecimal number system.

    Here in above we are converting hexadecimal number to hexadecimal only.

    Note : In C++ the address where the value is stored in variables are also
    present in form of hexadecimal format.Address in C++ are in hexadecimal format.

    In IP address also the hexdecimal number system is used.

--> Decimal To Octa Decimal

    Let x = 23

    23%8 = 7
    2%8 = 2

    Start from bottom to top.

    23 is equal to 27.

--> Convert Octa To Decimal

    Let x = 27

    2*8^1 + 7*8^0 = 16 + 7 = 23

--> Convert Decimal To Hexadecimal

    Let x = 11

    11%16 = 11

    Since we know that in hexadecimal number system 11 is nothing but B.

    So 11 is hexadecimal is B.    

--> Convert Hexadecimal To Decimal

    Let x  = AC2

    A*16^2 + C*16^1 + 2*16^0 = 10*16*16 + 12*16 + 2 = 

*/