#include <stdio.h>
#include <stdlib.h>
#define MAX 100

//Prototypes
// void print(int[]);
// void load(int *, int *);
// float average(int *, int);
// int high(int *, int);

// Functions

float high(int *array, int size)
{

int max = array[0];
int i;
for(i=1; i<size; i++){

    if (array[i] > max)
    max = array[i];
}
return max;

}



//-----------------------------
void load(int *a, int *s)
{
    int i;

    printf("Enter how many scores: ");
    scanf("%d", s);

    printf("Enter your %d scores here: ", *s);
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

//-----------------------------

float average (int *a, int s){

    float sum = 0;
    int i;

    for(i=0; i<s; i++){

        sum = sum + a[i];
        return sum/s;

    }
}
//-----------------------------

int main()
{

    int score[MAX] = {0};
    int limit = 0;

    // printf("the max scores is %.2f", high(score,3));
    // load(score, &limit);
    load(score, &limit);
    print(score, limit);
    // float av = average(score,2);
    // printf("The Average of the %d is =  %.2f ",2, av);

    return 0;
}