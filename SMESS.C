#include<stdio.h>
#include<conio.h>
void main()
{
   int idly=100,dhosai=50,tea=50,bonda=200;
   int aidly,adhosai,atea,abonda;
   int uidly,udhosai,utea,ubonda;
   int sidly,sdhosai,stea,sbonda;
   int balance,bidly,bdhosai,btea,bbonda;
   int mbalance,midly,mdhosai,mtea,mbonda;
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
   midly=bidly-uidly;
   mdhosai=bdhosai-udhosai;
   mtea=btea-utea;
   mbonda=bbonda-ubonda;
   printf("ENter Sree's idly\n\t\t:",sidly);
   scanf("%d",&sidly);
   printf("Enter Sree's dhosai\n\t\t:",sdhosai);
   scanf("%d",&sdhosai);
   printf("Enter Sree's tea\n\t\t:",stea);
   scanf("%d",&stea);
   printf("Enter Sree's bonda\n\t\t:",sbonda);
   scanf("%d",&sbonda);
   Idly=midly-sidly;
   Dhosai=mdhosai-sdhosai;
   Tea=mtea-stea;
   Bonda=mbonda-sbonda;
   printf("Balance\nIdly\t%d\nDhosai\t%d\nTea\t%d\nBonda\t%d",Idly,Dhosai,Tea,Bonda);
   printf("\n\n\n\n\n\t\t\t\tThanking You");
   printf("\n\n\t\t\t\tUma Shankar Mess");
   getch();
}