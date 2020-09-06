// Traversing 2D array

#include<stdio.h>

int main()

{
	int num[3][3]={{22,44,66},{12,14,16},{32,34,36}};
	
	int row=0;
	int col=0;
	
	for (row=0; row<3; row++)
	{
		for (col=0; col<3; col++)
		{
			printf("\t%d",num[row][col]);
		}
		
		printf("\n");
	}
	
	getch();
}
