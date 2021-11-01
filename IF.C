#include<stdio.h>
#include<conio.h>
int rahul;

void main()
{     while(1)
      {
      clrscr();
	 printf("Enetr Status :");
	 scanf("%d",&rahul);
	 //condition checking
		if(rahul==0)
		{
			printf("\n\nSitting");
		}
		else if(rahul==1)
		{
			printf("\n\nStanding");
		}
		else
		{
			printf("\n\nInvalid Input");
		}
	 getch();
	 }
}
