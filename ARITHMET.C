#include<stdio.h>
#include<conio.h>

void main()
{
   int input1,input2,o1,o2,o3,o4,o5;
   clrscr();
   printf("Enter the inputs:");
   scanf("%d%d",&input1,&input2);
   //printf("Enter the input 2");
   //scanf("%d",&input2);
   o1=input1+input2;
   printf("\n\tSum of values are %d\n\t", o1);
   o2=input1-input2;
   printf("Difference of values are %d\n\t", o2);
   o3=input1*input2;
   printf("Multiple of values are %d\n\t", o3);
   o4=input1/input2;
   printf("Division of values are %d\n\t", o4);
   o5=input1%input2;
   printf("Modules of values are %d\n\t", o5);
   printf("\n\n\n\n\n\n\n\n\n\n\tUMA SHANKAR THE BOSS");

   getch();
}