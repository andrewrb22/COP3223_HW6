#include <stdio.h>
#include <stdlib.h>

int main(){

    int A[] = {2,6,5,3,8};
    int i;
    for(int i = 0; i<5; i++){
        printf("Address = %d\n", &A[i]);
        printf("Address = %d\n", A + i);
        printf("Value = %d\n", A[i]);
        printf("Vaue = %d\n", *(A + i));
    }

    return 0;
}