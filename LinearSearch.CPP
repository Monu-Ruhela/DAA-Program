#include<stdio.h>
#include<conio.h>
void main()
{
	int count=0,i,n,search,a[100],found=0;
	clrscr();
	printf("Enter the size of array=");
		scanf("%d",&n);
	printf("enter the values in list=\n");
	count++;
	for(i=0;i<n;i++)
	{

		scanf("%d",&a[i]);
	       }

	printf("Enter the search element=");
	scanf("%d",&search);
	count++;
	for(i=0;i<n;i++)
	{
		count++;
		if(a[i]==search)
		{
			count++;
			found=1;
			count++;
			break;
		}
	}
	count++;
	if(found==0)
	{

		printf("elemnt is not found");

	 }
	else
	{

	printf("element is found");

	}

	printf("\n count=%d",count);
	getch();

}

