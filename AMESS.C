#include<stdio.h>
#include<conio.h>
void main()
{
   int idly=100,dhosai=50,tea=50,bonda=200;
   int aidly,adhosai,atea,abonda;
   int balance,Idly,Dhosai,Tea,Bonda;
   clrscr();
   //scanf("%d%d%d%d",&aidly,&adhosai,&atea,&abonda);
   printf("Enter Arun's idly\n\t:",aidly);
   scanf("%d",&aidly);
   printf("Enter Arun's dhosai\n\t:",adhosai);
   scanf("%d",&adhosai);
   printf("Enter Arun's tea\n\t:");
   scanf("%d",&atea);
   printf("Enter Arun's bonda\n\t:");
   scanf("%d",&abonda);
   Idly=idly-aidly;
   Dhosai=dhosai-adhosai;
   Tea=tea-atea;
   Bonda=bonda-abonda;
   printf("Balance\nIdly\t%d\nDhosai\t%d\nTea\t%d\nBonda\t%d",Idly,Dhosai,Tea,Bonda);
   getch();
}