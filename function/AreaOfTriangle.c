#include<stdio.h>

float area(float base,float height){
    return (base*height/2);
    }



int main()
{
    float b,h, a;
    printf("Enter value of base and height of the triangle:\n");
    scanf("%f %f",&b,&h);
    a=area(b,h);
    printf("\nArea of the triangle is  %.2f.\n",a);
    return 0;
}
