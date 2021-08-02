#include <stdio.h>
void func(int i){
    printf("\nAddress of i: %u\n", &i);
    printf("Value of i: %d", i);
}
int main(){
    int i;
    printf("Enter the value of i: \n");
    scanf("%d", &i);
    printf("Address of i: %u\n", &i);
    func(i);
    return 0;
}