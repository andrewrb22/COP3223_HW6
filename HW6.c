#include <stdio.h>
#include <stdlib.h>

int main(){

    char name[50] = { 'A', 'B', 'C', 'D'};
    printf("First letter is %c", *(name + 0));

    return 0;
}