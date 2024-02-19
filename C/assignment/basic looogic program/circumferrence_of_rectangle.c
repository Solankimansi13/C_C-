//WAP to find circumference of rectangle

#include<stdio.h>
int main()
{
    int length,width,r;

    printf("enter length of rectangle: ");
    scanf("%d",&length);
    printf("enter width of rectangle: ");
    scanf("%d",&width);
    r=2*length+width;
    printf("area of rectangle is  %d",r);

    return 0;

}