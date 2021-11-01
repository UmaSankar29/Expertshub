#include<stdio.h>
int diwali();
int laddu,ras,temp;

void main()

{
clrscr();
	printf("Enter Laddu :");
	scanf("%d",&laddu);
	printf("Enter Ras :");
	scanf("%d",&ras);
	temp=diwali(laddu,ras);
	printf("Total Sweets : %d",temp);
getch();
}

int diwali(int a, int b)

{
	if(ras==0)
	{
	return 0;
	//if ras=0, then total no of sweets also 0. When I got tensioned.
	}
	else
	{
	return a+b;
	}
}
