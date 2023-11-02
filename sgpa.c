#include <stdio.h>
#include<stdlib.h>
int main()
{
    int subNo,totalCredit,prodGandC,sumOfProd=0;
    float sgpa;
    printf("Enter number of subjects\n");
    scanf("%d", &subNo);
    printf("Enter total number of credits\n");
    scanf("%d", &totalCredit);
    int *credit = (int *)malloc(subNo*sizeof(int));
    int *grade = (int *)malloc(subNo*sizeof(int));
    for (int i = 0; i < subNo; i++)
    {
        printf("Enter credit of a subject\n");
        scanf("%d",&credit[i]);
        // credit++;
        printf("Enter it's grade (A+=10, A=9, B+=8, B=7, C=6, D=5, E=4)\n");
        scanf("%d",&grade[i]);
        // grade++;
    }
    for (int j = 0; j < subNo; j++)
    {
        prodGandC = credit[j]*grade[j];
        sumOfProd+=prodGandC;
    }
    sgpa = (float)sumOfProd/(float)totalCredit;
    printf("Your grade is %f",sgpa);
    free(credit);
    free(grade);

    return 0;
}