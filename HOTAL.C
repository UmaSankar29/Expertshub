#include<stdio.h>
#include<conio.h>
void main()
{
   float Bpoori;
   float apoori,Balpoori,Person,Person1,Person2,Person3,eatP,eatP1,eatP2,eatP3;
   float Apoori,Balance;
   clrscr();

   printf("Total no of Poori:\t");
   scanf("%f",&Bpoori);


   printf("Enter Person's Poori:\t");
   scanf("%f%",&eatP);
   printf("Enter Person1's Poori:\t");
   scanf("%f%",&eatP1);
   printf("Enter Person2's Poori:\t");
   scanf("%f%",&eatP2);
   printf("Enter Person3's Poori:\t");
   scanf("%f%",&eatP3);

   apoori=eatP+eatP1+eatP2+eatP3;
   printf("\n\nAte:%f",apoori);
   //Apoori=apoori/Bpoori*100;
   //printf("\n\nAte Percentage:%f");
   Balpoori=Bpoori-apoori;
   printf("\n\nBalance Poori:%f",Balpoori);
   //Balance=Balpoori/Bpoori*100;
   //printf("\n\nBalance Poori Percentage:%f",Balance);
   getch();
}