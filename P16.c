//print a right angle triangle

#include<stdio.h>
#include<conio.h>

main()
{
    int i,j,k;

    printf("Enter a no.: ");
    scanf("%d",&k);
    for (i=1; i<=k; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();

}
