#include<stdio.h>

int main()

{
    int num,r,sum=0,temp;

    printf("Enter a number: ");
    scanf("%d",&num);

    temp=num;

    while (num>0)
    {
        r=num%10;
        sum = ( sum * 10) + r;
        num = num / 10;
    }
    if ( temp == sum )
        printf("Numer is palindrome.\n");

    else
        printf("Number is not palindrome.\n");

        return main();

}
