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
}
