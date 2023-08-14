#include<stdio.h>
int diwali();
int laddu,ras,temp;

void main()

{
clrscr();
	printf("Enter Laddu :");
	scanf("%d",&laddu);
	printf("Enter Rasagulla :");
	scanf("%d",&ras);
	temp=diwali(laddu,ras);
	printf("Total Sweets : %d",temp);
getch();
}

int diwali(int a, int b)

{
	return a+b;
}
