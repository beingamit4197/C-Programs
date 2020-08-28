#include<stdio.h>

float main()

{
    float a,b;

    printf("Enter the first number: ");
    scanf("%f",&a);

    printf("Enter the second number: ");
    scanf("%f",&b);

    float c=a*b;

    printf("The multiply of these numbers: %f",c);

    getch();
    return 0;

}
