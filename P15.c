// basic sum print

#include<stdio.h>

main()

{
        int arr[10],i,sum=0;

        for( i=0; i<10; i++)
        {
            printf("Enter the %d number \n", i+1);
            scanf("%d",&arr[i]);
        }
     for( i=0; i<10; i++)
     {
         printf("Number %d is %d\n", i+1, arr[i]);
        sum = sum + arr[i];
     }
        printf("Sum of numbers is %d\n", sum);
        sum=0;
        printf("\n");

     getch();
}
