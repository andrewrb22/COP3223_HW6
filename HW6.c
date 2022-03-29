#include <stdio.h>
#include <stdlib.h>
#define MAX 100
// Prototypes
// void print(int[]);
// void load(int *, int *);
// float average(int *, int);
// int high(int *, int);

// Functions
void load(int *a, int *s)
{
    int i;

    printf("Enter how many scores: ");
    scanf("%d", s);

    printf("Eter your %d scores here: ", *s);
    for (i=0; i<*s; i++)
    {
        scanf("%d", &a[i]);
    }
}
//--------------------------
void print(int a[], int s)
{
    int i =0;
    while(i<s)
    {
        printf("\tScores[%d] = %d\n", i, a[i]);
        i++;
    }
}

int main()
{

    int score[MAX] = {0};

    print(score, 5);

    return 0;
}