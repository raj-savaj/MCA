#include<stdio.h>
int top=-1,arr[100];
void insert();
void del();
void display();
int main()
{
    int ch;
    printf("1.Insert\n2.Remove\n3.Display\n4.Exit\n");
    while(1)
    {
        printf("Enter your choice(1-4):");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                insert();
                break;
            case 2:
                del();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("\nWrong Choice!!\n");
        }
    }
}
void insert()
{
    int val;
    printf("Enter element to push:");
    scanf("%d",&val);
    top++;
    arr[top]=val;
}
void del()
{
    if(top==-1)
    {
        printf("Array is empty!!\n");
    }
    else
    {
        printf("Deleted element is %d\n",arr[top]);
        top=top-1;
    }
}
void display()
{
    int i;

    if(top==-1)
    {
        printf(" Array is empty!!");
    }
    else
    {
        printf("...... Array .....\n");
        for(i=top;i>=0;--i)
            printf("%d\n",arr[i]);
    }
}
