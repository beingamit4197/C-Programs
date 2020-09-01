// Addition of two Array

#include<stdio.h>
#include<conio.h>

main()
{
        int arr1[2],arr2[2],arr3[3],i;

        printf("Enter two numbers for first Array: ");

        for ( i=0; i<2; i++)
            {
                scanf("%d",&arr1[i]);
            }
        printf("Enter two numbers for second Array: ");

        for ( i=0; i<2; i++)
            {
                scanf("%d",&arr2[i]);
            }
        for ( i=0; i<2; i++)
        {
            arr3[i] = arr1[i] + arr2[i];
        }

         for ( i=0; i<2; i++)
            {
                printf("\n First Array Element: %d",arr1[i]);
            }

         for ( i=0; i<2; i++)
            {
                printf("\n Second Array Element: %d",arr2[i]);
            }


         for ( i=0; i<2; i++)
            {
                printf("\n Total sum of Elements: %d",arr3[i]);
            }

            getch();
}
