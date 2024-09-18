/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
struct node
{
     int data;
     struct node*next;
     };
     struct node*head,*newnode,*temp;
     int main()
     {
         int x,choice;
         printf("\n operations perfomed by linked list ");
         printf("\n 1.creation");
         printf("\n 2.display");
         printf("\n 3.end");
         printf("\n enter the choice:");
         scanf("%d",&choice);
         //creation
         newnode=(struct node*)malloc(sizeof(struct node));
         printf("enter the data");
         scanf("%d",&x);
         newnode->next=0;
         newnode->data=x;
         if(head==0)
         {
             head=temp=newnode;
         }
      else
      {
          temp->next=newnode;
          temp=newnode;
      }
      //display Code
      temp=head;
      while(temp!=0)
      {
          printf("%d\t",temp->data);
          temp=temp->next;
      }
     
     return 0;
}