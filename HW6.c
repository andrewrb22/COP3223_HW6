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
     int i, passcount=0, countA=0,countB=0, countC=0, countD=0, countF=0;
     for(i=0;i<s;i++)
   {
       if(a[i]>=70)
          passcount++;
   }
   printf("- [%d] students passed the test with a score of 70 or higher\n\n",passcount);
   //loop to count letter grades counts obtained 
   for(i=0;i<s;i++)
   {
       if(a[i]>=90&&a[i]<=100)
       countA++;
       else if(a[i]>=80&& a[i]<=89)
       countB++;
       else if(a[i]>=70 && a[i] <=79)
       countC++;
       else if(a[i]>=60 && a[i]<=69)
       countD++;
       else
       countF++;
   }
   //print letter grade distribution  
   printf("\tLetter Grade distribution of the scores : \n\n");
   printf("\t- [%d] students earned the grade of A (90-100)\n",countA);
   printf("\t- [%d] students earned the grade of B (80-89)\n",countB);
   printf("\t- [%d] students earned the grade of C (70-79)\n",countC);
   printf("\t- [%d] students earned the grade of D (60-69)\n",countD);
   printf("\t- [%d] students earned the grade of F (59 or below)\n",countF);
   
    // while(i<s)
    // {

    //     printf("\tScores[%d] = %d\n", i, a[i]);
    //    i++;    
            
    // }
   
       
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
    int i = 0 ;
    // printf("the max scores is %.2f", high(score,3));
    // load(score, &limit);
    load(score, &limit);
    printf("Here is your report: \n\n");
    print(score, limit);
    
    // float av = average(score,2);
    // printf("The Average of the %d is =  %.2f ",2, av);

    return 0;
}