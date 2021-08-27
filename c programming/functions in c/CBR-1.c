//Call By Reference
 #include <stdio.h>
 
void value(int *num){
    printf("Before adding the number the value of *num = %d\n", *num);
    *num += 200;
    printf("After adding the number the value of *num = %d\n", *num);
}

int main(){
    int z =100;
    printf("Before passing to the function the value of z = %d\n", z);
    value(&z);//Here we are passing address of the integer.
    printf("After passing to the function the value of z = %d\n", z);

    return 0;
}
