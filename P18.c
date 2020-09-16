// Multiplication of two matrix...

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int r1,r2,c1,c2,loop1,loop2,loop3,sum=0;
	int first[10][10],second[10][10],mult[10][10];
	
	printf("Enter the numbers of rows and coloumn for first matrix: ");
	scanf("%d%d",&r1,&c1);
	printf("Enter the elements of first matrix: ");
	
		for ( loop1=0; loop1<r1; loop1++)
		{
			for ( loop2=0; loop2<c1; loop2++)
			{
				scanf("%d",&first[loop1][loop2]);
			}
		}
	
	
	printf("Enter the numbers of rows and coloumn for second matrix: ");
	scanf("%d%d",&r2,&c2);
	
		if(c1 != r2)
		{
			printf("Matrix multiplication is not possible.");
			getch();
			exit(0);
		}
		
	printf("Enter the elements of second matrix: ");
	
		for ( loop1=0; loop1<r2; loop1++)
		{
			for ( loop2=0; loop2<c2; loop2++)
			{
				scanf("%d",&second[loop1][loop2]);
			}
		}
	
	for ( loop1=0; loop1<r1; loop1++)
		{
			for ( loop2=0; loop2<c2; loop2++)
			{
				for ( loop3=0; loop3<r2; loop3++)
				{
					sum = sum + first[loop1][loop3] * second[loop3][loop2];
				}
				
				mult[loop1][loop2] = sum;
				sum = 0;
				
			}
		}	
		
	printf("Elements of first matrix:\n ");
	
		for ( loop1=0; loop1<r1; loop1++)
		{
			for ( loop2=0; loop2<c1; loop2++)
			{
				printf("\t%d",first[loop1][loop2]);
			}
			printf("\n");
		}
		
	printf("Elements of second matrix:\n ");
	
		for ( loop1=0; loop1<r2; loop1++)
		{
			for ( loop2=0; loop2<c2; loop2++)
			{
				printf("\t%d",second[loop1][loop2]);
			}
			printf("\n");
		}	
	
	printf("Multiplication of two matrix:\n ");
	
		for ( loop1=0; loop1<r1; loop1++)
		{
			for ( loop2=0; loop2<c2; loop2++)
			{
				printf("\t%d",mult[loop1][loop2]);
			}
			printf("\n");
		}
		
		getch();
		return 0;
}
