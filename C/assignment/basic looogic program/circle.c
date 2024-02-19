// WAP to Find Area And Circumference of Circle

#include<stdio.h>
#define PI 3.14
int main()
{
    float radious, area, circumference;

    printf("enteer the radious of circle: ");
    scanf("%f",&radious);

    circumference=2*PI*radious;
    area=PI*radious*radious;

    printf("\ncircumference of circle is %f\n",circumference);
    printf("area of circle is %f", area);
}
