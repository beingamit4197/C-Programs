#include<stdio.h>
#include<conio.h>

main()

{
    int sub[5],i,total=0;

    printf("Enter five numbers: ");

    for (i=0; i<5; i++)
    {
        scanf("%d",&sub[i]);
        total = total + sub[i];
    }

    for ( i=0; i<5; i++)
    {
        printf("%d\t",sub[i]);
    }

    printf("Total is %d", total);

    getch();
}
