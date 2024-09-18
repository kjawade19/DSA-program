/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
int n,arr[10], pos,x, i ,a;

int main()
{
    
    int choice ;
    printf("\n Enter the size of array :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
            {
                scanf("%d",&arr[i]);
            }
    while(1)
    {
        printf("1.Insertion of element from 1st position\n");
        printf("2.Insertion of element from any position\n");
        printf("3.Insertion of element from last postion\n");
        printf("4.Deletion of element from 1st position\n");
        printf("5.Insertion of element from any position \n");
        printf("6.Deletion of element from last position\n");
        printf("7.Display the elements\n");

        printf("Enter the choice");
        scanf("%d",& choice);
        switch(choice)
        {
            
            case 1:
            // Code for Insertion of element from 1st position
            printf("\nEenter the element");
            scanf("%d",&x);
            for(i=n-1;i>=0;i--)
           {
               arr[i+1]=arr[i];
           }
            arr[0]=x;
            n++;
            break;
            case 2:
            // Code for Insertion of element from any position 
            printf("\nEnter the element");
            scanf("%d",&x);
            printf("Enter tghe position fo insertion");
            scanf("%d", &pos);
            for(i=n-1;i>=pos-1;i--)
            {
                arr[i+1]=arr[i];
            }
            arr[pos-1]=x;
            n++;
            break;
            case 3:
            // code for Insrtion of element from last position
            printf("\nEnter the element");
            scanf("%d", &x);
            arr[n]=x;
            n++;
            break;
            case 4:
            // code for Deletion of element from 1st position
            printf("\nEnter the element");
            for(i=0;i<=n;i++)
            {
                arr[i]=arr[i+1]; // Shifting an array
            }
            n--;
            break;
            case 5:
            // code for deletion of element from any poisition
            printf("\nEnter the position for deletion");
            for(i=pos;i<=n;i++);
            {
                arr[i]=arr[i+1]; //Shifting the array
            }
            n--;
            break;
            case 6:
            // code for deletion of element from last element 
            printf("\ndelete an element");
            n--;
            break;
            case 7:
            // Display code
            printf("Display the elements\n");
            for(i=0;i<n;i++)
            {
                printf("%d\t",arr[i]); 
            }
            break;
            case 8:
            exit(0);
            printf("\n Invaild choice");
            break;
        } // End of swtich
        
    } // End of while loop 
} // End of main function
