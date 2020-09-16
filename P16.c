<<<<<<< HEAD
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

=======
// eg. of traversal

#include <stdio.h>
int main() {
   
   int a[10],i,size;
   
   printf("Enter the size of array: ");
   scanf("%d",&size);
   printf("Enter the elements of Array: ");
   
   for (i=0; i<size; i++)
   {
       scanf("%d",&a[i]);
   }
    
    printf("Elements in array are: ");
    for (i=0; i<size; i++)
    {
        printf("\n%d",a[i]);
    }
    
    getch();
    return 0;
>>>>>>> cfad2b8e8d83f5b2852f4bcd79930de69c0977d2
}
