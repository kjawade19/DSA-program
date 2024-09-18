/******************************************************************************
Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>

int main () 
{
   int top=-1,stack[10],x,n,i,choice;
   printf("enter the size of stack:");
   scanf("%d",&n);
 
   while(1)  
   {
       
      
       printf("1.push : inaertion of stack: \n");
       printf("2.pop : deletion of element from stack \n");
       printf("3.peek : show topmost element from stack: \n");
       printf("4.underflow : check weather the stack is empty \n");
       printf("5.overflow : check weather the stack is full\n");
       printf("6.display: show the element of stack\n");
       printf("7.exit \n");
       printf("enter the choice:");
       scanf("%d",&choice);
   
   
   
       switch(choice)
      {
        case 1:
         
     
       if (top==n-1){
           printf("overflow!!   \n");
           }
       else
       {
           printf("enter the element to the stack:  \n");
           scanf("%d",&x);
           top++;
           stack[top]=x;
       }
     
       
       
        break;
        case 2:
        if(top==-1){
                printf("Underflow");
    
            }
            else
            {
                top--;
                
            }

                break;

        case 3:
        printf("element at top of stack=%d\n",stack[top]);
        break;

        case 4:
       if(top==-1){
           printf("underflow");
            }
       else{
           printf("not underflow");
            }
        break;
        
        case 5:
        if (top==n-1)
            {
                printf("overflow\n");
            }
          else
            {
            printf("not overflow\n");
             }
                break;
        case 6:
        if(top==-1)
                {
                    printf("underflow");
                }
                for(int i=top;i>=0;i--)
                {
                    printf("%d\n",stack[i]);
                }
       
                break;
                case 7:
                exit(0);
                default:
                printf("invalid choice");
      } // end of switch case
}      
return 0; 
}            
        

     

  

