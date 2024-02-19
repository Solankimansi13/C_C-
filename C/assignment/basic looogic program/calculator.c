#include<stdio.h>
int main()
{
    int number1, number2;

    printf("enter number 1: ");
    scanf("%d",&number1);
    printf("enter number 2: ");
    scanf("%d",&number2);

    printf("the sum is %d",number1+number2);
    printf("\nthe subtraaction is %d",number1-number2);
    printf("\nmultipllication is %d",number1*number2);
    printf("\ndivison is %d",number1/number2);
    printf("\nmodulo is %d",number2%number2);
    return 0;
}