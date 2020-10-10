#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int count=0;
void main()
{

	void inputmatrix(int[4][4],int,int);
	void outputmatrix(int[4][4],int,int);
	void mulmatrix(int[4][4],int [4][4],int[4][4],int,int,int);
	int a[4][4],b[4][4],c[4][4],sum[4][4],row1,col1,row2,col2;
	clrscr();
	printf("Enter the order of the 1.matrix Row,Column= ");
	scanf("%d\n%d",&row1,&col1);
	inputmatrix(a,row1,col1);
	printf("Enter the order of the 2.matrix Row,Column= ");
	scanf("%d\n%d",&row2,&col2);
	inputmatrix(b,row2,col2);
	printf("The first matrix is\n");
	outputmatrix(a,row1,col1);
	printf("The second matrix is\n");
	outputmatrix(b,row2,col2);

	if(row1==col2)
		{
		 mulmatrix(a,b,sum,row1,col1,col2);
		 printf("Multiplication\n");
		 outputmatrix(sum,row1,col2);
		}
	else
	printf("You Enter the Wrong Order for Multiplication\n");
	getch();
}

void inputmatrix(int x[4][4],int r,int c)
{
	int i,j;
	printf("Enter the Elements of the array:\n");
	for(i=0;i<r;i++)
	{
	 for(j=0;j<c;j++)
	 {
	  scanf("%d",&x[i][j]);
	 }
	}
}
void outputmatrix(int x[4][4],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
	 for(j=0;j<c;j++)
	  {
	 printf("%d\t",x[i][j]);
	 }
	printf("\n");
	}
}

void mulmatrix(int a[4][4],int b[4][4],int sum[4][4],int r1, int c1, int c2)
 {
   int i,j,k;

   for (i = 0; i < r1; i++)
   {
      for (j = 0; j < c2; j++)
      {
	 sum[i][j] = 0;
      }
   }


   for ( i = 0; i < r1; i++)
   {
      for ( j = 0; j < c2; j++)
      {
	 for ( k = 0; k < c1; k++)
	 {
	    sum[i][j] += a[i][k] * b[k][j];
	 }
      }
   }
}
