/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int queue[10],n,x,f=-1,r=-1,choice;
    
    printf("\n enter the size of queue:");
    scanf("%d",&n);
    while(1)
 {
    printf("\n 1.insertion\n 2.deletion\n 3.underflow");
    printf("\n 4.overflow\n 5.peek\n 6.display\n 7.exit");
    printf("\n\n enter the choice");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1://insertion
        printf("enter the element for insertion in queue");
        scanf("%d",&x);
        if(r==n-1)
        {
            printf("\n overflow");
            
        }
        else if(f==-1&&r==-1)
        {
            f=r=0;
            queue[r]=x;
        }
        else
        {
            r++;
            queue[r]=x;
        }
        break; case 2://deletion
        printf("delete the element in queue");
        scanf("%d",&x);
        if(f==-1&&r==-1)
        {
            printf("'\n underflow");
        }
        else if(f==r)
        {
            printf("%d",queue[f]);
            f=r=-1;
        }
        else
        {
            printf("delete the element from queue is : %d",queue[f]);
            f++;
        }
        break;
        case 3://underflow
        if(f==-1&&r==-1)
        {
            printf("queue is underflow");
            
        }
        else
        {
            printf("queue is not underflow");
        } 
        break;
        case 4://overflow
        if(r==-1)
        {
            printf("queue is overflow");
        }
        else
        {
            printf("queue is not overflow");
        }
        break;
        case 5://peek:sho first element
        printf("the element at first position %d",queue[f]);
        break;
        case 6://display
        for(int i=f;i<=r;i++)
        {
            printf("%d\t",queue[i]);
        }
        break;
        case 7://exit
         exit(0);
        break;
        default:
        printf(" invalid choice");
    }
 }

      return 0;  
}   
    
    



    
