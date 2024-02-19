//WAP to find the areaa of rectangular prism

#include<stdio.h>
int main()
{
    float length, width, height;

    printf("enter length of rectangle: ");
    scanf("%f",&length);
    printf("enterr width of rectangle: ");
    scanf("%f",&width);
    printf("enter height of rectangle: ");
    scanf("%f",&height);

    int area=length*width*height;

    printf("area of rectangluar is %f",area);
    
    return 0;
}