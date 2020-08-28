#include<stdio.h>

int main()
{
int a,b;

printf("Enter the first number: ");
scanf("%d",&a);

printf("Enter the second number: ");
scanf("%d",&b);

float c=a/b,d=a*b;

printf("The dividend of these numbers: %f\n",c);
printf("The multiply of these numbers: %f",d);

getch();

return 0;

}
