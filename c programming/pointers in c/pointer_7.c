//Different memory is allocated to an integer in function
#include <stdio.h>
void func(int i){
    printf("\nValue of i: %d\n", i);
    printf("Address of i: %u\n", &i);
}
int main(){
    int i;
    printf("Enter the value of i: ");
    scanf("%d", &i);
    printf("Address of i: %u\n", &i);
    func(i);
    return 0;
}