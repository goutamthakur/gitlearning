#include <stdio.h>
void fun(int *ptr){
    *ptr =30;
}
int main(){
    int y =20;
    printf("The original value of y is %d\n", y);
    fun(&y);
    printf("%d", y);


    return 0;
}