#include<stdio.h>
#include<conio.h>
void main()
{
   int idly=100,dhosai=50,tea=50,bonda=200;
   int aidly,adhosai,atea,abonda;
   int uidly,udhosai,utea,ubonda;
   int balance,bidly,bdhosai,btea,bbonda;
   int Balance,Idly,Dhosai,Tea,Bonda;
   clrscr();
   //scanf("%d%d%d%d",&aidly,&adhosai,&atea,&abonda);
   printf("Enter Arun's idly\n\t\t:",aidly);
   scanf("%d",&aidly);
   printf("Enter Arun's dhosai\n\t\t:",adhosai);
   scanf("%d",&adhosai);
   printf("Enter Arun's tea\n\t\t:");
   scanf("%d",&atea);
   printf("Enter Arun's bonda\n\t\t:");
   scanf("%d",&abonda);
   bidly=idly-aidly;
   bdhosai=dhosai-adhosai;
   btea=tea-atea;
   bbonda=bonda-abonda;
   printf("Enter Uma's idly\n\t\t:",uidly);
   scanf("%d",&uidly);
   printf("Enter Uma's dhosai\n\t\t:",udhosai);
   scanf("%d",&udhosai);
   printf("Enter Uma's tea\n\t\t:",utea);
   scanf("%d",&utea);
   printf("Enter Uma's bonda\n\t\t:",ubonda);
   scanf("%d",&ubonda);
   Idly=bidly-uidly;
   Dhosai=bdhosai-udhosai;
   Tea=btea-utea;
   Bonda=bbonda-ubonda;
   printf("Balance\nIdly\t%d\nDhosai\t%d\nTea\t%d\nBonda\t%d",Idly,Dhosai,Tea,Bonda);
   getch();
}