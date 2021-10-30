#include<stdio.h>
#include<conio.h>
void main()
{
   int idly=100,dhosai=50,tea=50,bonda=200;
   int aidly,adhosai,atea,abonda;
   clrscr();

   printf("Enter Arun's idly\n\t\t:",aidly);
   scanf("%d",&aidly);
   printf("Enter Arun's dhosai\n\t\t:",adhosai);
   scanf("%d",&adhosai);
   printf("Enter Arun's tea\n\t\t:");
   scanf("%d",&atea);
   printf("Enter Arun's bonda\n\t\t:");
   scanf("%d",&abonda);

   printf("Enter Uma's idly\n\t\t:");
   scanf("%d",&aidly);
   printf("Enter Uma's dhosai\n\t\t:");
   scanf("%d",&adhosai);
   printf("Enter Uma's tea\n\t\t:");
   scanf("%d",&atea);
   printf("Enter Uma's bonda\n\t\t:");
   scanf("%d",&abonda);

   printf("Enter Sree's idly\n\t\t:");
   scanf("%d",&aidly);
   printf("Enter Sree's dhosai\n\t\t:");
   scanf("%d",&adhosai);
   printf("Enter Sree's tea\n\t\t:");
   scanf("%d",&atea);
   printf("Enter Sree's bonda\n\t\t:");
   scanf("%d",&abonda);

   printf("Enter Rama's idly\n\t\t:");
   scanf("%d",&aidly);
   printf("Enter Rama's dhosai\n\t\t:");
   scanf("%d",&adhosai);
   printf("Enter Rama's tea\n\t\t:");
   scanf("%d",&atea);
   printf("Enter Rama's bonda\n\t\t:");
   scanf("%d",&abonda);

   idly=idly-aidly-aidly-aidly-aidly;
   dhosai=dhosai-adhosai-adhosai-adhosai-adhosai;
   tea=tea-atea-atea-atea-atea;
   bonda=bonda-abonda-abonda-abonda-abonda;
   printf("Balance\nIdly\t%d\nDhosai\t%d\nTea\t%d\nBonda\t%d",idly,dhosai,tea,bonda);

   printf("\n\n\n\n\n\t\t\t\tThanking You");
   printf("\n\n\t\t\tUma Shankar Centenary Mess..!");
   getch();
}