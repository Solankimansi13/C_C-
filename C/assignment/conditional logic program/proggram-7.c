//Accept marks from user and check pass or fail 

#include<stdio.h>
int main()
{
    int marks;

    printf("Enter Marks = ");
    scanf("%d",&marks);

    if(marks>=30)
    {
        printf("PASS");
    }
    else
    {
        printf("FAIL");
    }
}