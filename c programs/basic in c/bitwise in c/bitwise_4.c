/* Bitwise XOR (or) Bitwise exclusive OR operator
12 = 00001100 (In Binary)
25 = 00011001 (In Binary)

Bitwise XOR Operation of 12 and 25
  00001100
^ 00011001
  ________
  00010101  = 21 (In decimal)
*/
//1^1=0
//0^0=0
//1^0=1
//0^1=1

#include <stdio.h>

int main()
{
    int a = 12, b = 25;
    printf("Output = %d\n", a ^ b);

    return 0;
}