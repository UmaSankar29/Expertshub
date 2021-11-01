#include<stdio.h>
#include<conio.h>
int rahul=1;

void main()
{     do
      {
      yogesh:
      clrscr();
	 printf("Enetr Status :");
	 scanf("%d",&rahul);
	 //condition checking
		if(rahul==0)
		{
			printf("\n\nSitting");
		//	rahul=1;
		//	getch();
		//	continue;
		}
		else if(rahul==1)
		{
			printf("\n\nStanding");
		}
		else
		{
			printf("\n\nInvalid Input");

			//break;
		}
	 getch();
	 }
	 while(rahul);
}
