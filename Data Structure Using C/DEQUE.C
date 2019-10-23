/*USE OF DOUBLE-ENDED QUEUE USING ARRAY.*/
#include<stdio.h>
#include<conio.h>
#define SIZE 3
int arr[SIZE];
int front=-1;
int rear =-1;
int i;
main()
{
    int ans;
    clrscr();
    do
    {
        printf("\n1.Enter New Element From Right :\n");
        printf("2.Remove Element From Right :\n");
        printf("3.Enter New Element From Left :\n");
        printf("4.Remove Element From Left :\n");
        printf("5.Display :\n");
        printf("6.Exit :\n");
        printf("Enter Your Choice :");
        scanf("%d",&ans);
        switch(ans)
        {
        case 1:
            r_insert();
            break;
        case 2:
            r_remove();
            break;
        case 3:
            l_insert();
            break;
        case 4:
            l_remove();
            break;
        case 5:
            display();
            break;
        case 6:
            break;
        default:
            printf("You have entered wronge choice....");
        }
    } while(ans!=6);
    getch();
    return;
}
r_insert()
{
    int newitem;
    if(rear >= SIZE-1)
    {
        printf("Your QUEUE is full from RIGHT side....");
        return;
    }
    else
    {
        printf("Enter the New item :");
        scanf("%d",&newitem);
        arr[++rear]=newitem;
    }
    if(front == -1)//when inserting first element
    {
        front = 0;
    }
    getch();
    return;
}
r_remove()
{
    int remitem;
    if(rear < 0)
    {
        rear = -1;
        front = -1;
        printf("Your QUEUE is EMPTY from RIGTH side...\n");
        getch();
        return;
    }
    else
    {
        remitem = arr[rear--];
        printf("The removed item is : %d\n",remitem);
    }
    if(rear==0)//after deleting last element from rear end
        front = -1;
    getch();
    return;
}
l_remove()
{
    int remitem;
    if(front < 0 )
    {
        printf("Your QUEUE is EMPTY from LEFT side...\n");
        getch();
        return;
    }
    else
    {
        remitem = arr[front++];
        printf("The removed item is : %d\n",remitem);
    }
    if(front > rear)
    {
        front = -1;
        rear=-1;
    }
    getch();
    return;
}
l_insert()
{
    int item;
    printf("Enter the New element :");
    scanf("%d",&item);
    if(front==-1)
    {
        front=0;
	arr[++rear]=item;
	printf("\n inserted element is %d",item);
    }
    else if(front!=0)
    {
	arr[--front]=item;
	printf("\n inserted element is %d",item);

    }
    else
    {
	  printf("\n insertion is not posibble,overflow!!!");
    }
    getch();
    return;
}
display()
{
    if(front<0&&rear<0)
	printf("No elements to display. Underflow");
    else
    {
	for(i=front; i<=rear; i++)
	    printf("The elements are %d\n",arr[i]);
    }
    getch();
    return ;
}
