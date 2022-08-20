#include <stdio.h>



int main(void){

    int num, *ptr, *ptr2;

    num = 5;

    ptr = &num;

    ptr2 = ptr;

    printf("\nnum: %d\nptr: %d\nptr2: %d\n", num, *ptr, *ptr2);

    *ptr = 10;
    printf("\nnum: %d\nptr: %d\nptr2: %d\n", num, *ptr, *ptr2);

    *ptr2 = 30;
    printf("\nnum: %d\nptr: %d\nptr2: %d\n", num, *ptr, *ptr2);


    return 0;
}