//Call By Value
#include <stdio.h>
void value(int num){
    printf("Value of num in the function is %d\n", num);
    num += 200;
    printf("Value of num in the function after operation is %d\n", num);
}

int main(){
    int z =100;
    printf("Before passing to the function the value of z = %d\n", z);
    value(z);
    printf("After passing to the function the value of z = %d\n", z);

    return 0;
}
