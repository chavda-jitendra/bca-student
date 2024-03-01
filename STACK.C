#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
# define size 5

int stk[size],top=-1;

void push();
void pop();
void display();

void main()
{
   int choice;
   clrscr();

   do{
     clrscr();
     printf("\n \t1.push");
     printf("\n \t2.pop");
     printf("\n \t3.display");
     printf("\n \t0.exit");

     printf("\n enter any value");
     scanf("%d",&choice);

     switch(choice)
     {
	 case 1: push();
		 break;
	 case 2: pop();
		 break;
	 case 3: display();
		 break;
	 case 0: exit(0);
		 break;
	 default:printf("\n please enter chice between 0 to 3....");
		 break;
     }
     getch();
   }while(choice!=0);
   getch();

}
void push()
{
      int no;
      if(top< size-1)
      {
	 printf("\n enter value :");
	 scanf("%d",&no);
	 top++;
	 stk[top]=no;
      }
      else
      {
	  printf("\n stack is full....");
      }
}
void pop()
{
    if(top=-1)
    {
       printf("\n stack is emty...");
    }
    else
    {
       printf("\n %d is deleted...",stk[top]);
       top--;
    }
}
void display()
{
    int i;
    if(top=-1)
    {
       printf("\n stack is empty..");
    }
    else
    {
       for(i=top;i>=0;i++)
       {
	 printf("\n %d ",stk[i]);
       }
    }
}
