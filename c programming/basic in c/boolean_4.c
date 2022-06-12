//Boolean with logical operator
#include <stdio.h>
#include<stdbool.h>

int main(){
    bool x = true, y = false;
    printf("The value of x&&y is %d\n", x&&y);    
    printf("The value of x||y is %d\n", x||y);    
    printf("The value of !x is %d\n", !x);
    printf("The value of !y is %d\n", !y);    


    return 0;
}