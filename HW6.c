#include <stdio.h>
#include <stdlib.h>
#define MAX 100

// Functions

//------------GET SCORES INTO ARRAY AND HOW MANY SCORES-----------------
void load(int *a, int *s)
{
    int i;

    printf("\nEnter how many scores: ");
    scanf("%d", s);

    printf("\nEnter your %d scores here: ", *s);
    for (i = 0; i < *s; i++)
    {
        scanf("%d", &a[i]);
    }
}
//------------PRINT SCORES AND GRADES--------------

void print(int a[], int s)
{
    int i, passcount = 0, countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;
    for (i = 0; i < s; i++)
    {
        if (a[i] >= 70)
            passcount++;
    }
    printf("- [%d] students passed the test with a score of 70 or higher\n\n", passcount);
    // loop to count letter grades counts obtained
    for (i = 0; i < s; i++)
    {
        if (a[i] >= 90 && a[i] <= 100)
            countA++;
        else if (a[i] >= 80 && a[i] <= 89)
            countB++;
        else if (a[i] >= 70 && a[i] <= 79)
            countC++;
        else if (a[i] >= 60 && a[i] <= 69)
            countD++;
        else
            countF++;
    }
    // print letter grade distribution
    printf("\tLetter Grade Distribution of The Scores : \n\n");
    printf("\t- [%d] Students earned the grade of A (90-100)\n", countA);
    printf("\t- [%d] Students earned the grade of B (80-89)\n", countB);
    printf("\t- [%d] Students earned the grade of C (70-79)\n", countC);
    printf("\t- [%d] Students earned the grade of D (60-69)\n", countD);
    printf("\t- [%d] Students earned the grade of F (59 or below)\n", countF);
}

//-----------STANDAR DEVIATION EQUATION------------------

float deviation(int a[], int s)
{
    int i;
    float sum = 0, x, sdev;
    for (i = 0; i < s; i++)
        sum += a[i];
    x = sum / s;
    sum = 0.0;
    for (i = 0; i < s; i++)
        sum += (x - a[i]) * (x - a[i]);
    sdev = sqrt(sum / s);
    printf("\n\t The Standard Deviation of the scores is : %.2f\n", sdev);
}

//----------MAIN FUNCTION-------------------

int main()
{

    int score[MAX] = {0};
    int limit = 0;
    int i = 0;

    load(score, &limit);
    printf("\nHere is your report: \n\n");
    print(score, limit);
    deviation(score, limit);
    printf("\n Thank you using the program!");

    return 0;
}