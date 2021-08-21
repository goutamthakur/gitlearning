// Right Shift Operator
// Right shift operator shifts all bits towards right by certain number of specified bits. 
// It is denoted by >>.
// 212 = 11010100 (In binary)
// 212>>2 = 00110101 (In binary) [Right shift by two bits]
// 212>>7 = 00000001 (In binary)
// 212>>8 = 00000000 
// 212>>0 = 11010100 (No Shift)


// Left Shift Operator
// Left shift operator shifts all bits towards left by a certain number of specified bits. 
// The bit positions that have been vacated by the left shift operator are filled with 0. 
// The symbol of the left shift operator is <<.
// 212 = 11010100 (In binary)
// 212<<1 = 110101000 (In binary) [Left shift by one bit]
// 212<<0 = 11010100 (Shift by 0)
// 212<<4 = 110101000000 (In binary) =3392(In decimal)
//  Shift Operators
#include <stdio.h>
int main()
{
    int num=212, i;
    for (i=0; i<=2; ++i)
        printf("Right shift by %d: %d\n", i, num>>i);

     printf("\n");

     for (i=0; i<=2; ++i) 
        printf("Left shift by %d: %d\n", i, num<<i);    
    
     return 0;
}