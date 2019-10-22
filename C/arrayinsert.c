#include<stdio.h>
int main()
{
    int i, num, val, pos, a[10], choice;
    do
    {
        printf("\n 1. CREATE :\n");
        printf(" 2. DISPLAY :\n");
        printf(" 3. INSERT :\n");
        printf(" 4. DELETE :\n");
        printf(" 5. EXIT :\n");
        printf("Enter your choice =>\t");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter the size of the array :");
                scanf("%d", &num);
                printf("Enter elements of the array :");
                for(i=0; i<num; i++)
                {
                    scanf("%d", &a[i]) ;
                }
                break;

            case 2:
                printf("The array elemens are:\t");
                for(i=0; i<num; i++)
                {
                    printf("%d\t", a[i]);
                }
                break;

            case 3:
                printf("\tEnter the position of the array element :");
                scanf("%d", &pos);
                printf("\tEnter the element to be inserted :");
                scanf("%d", &val);
                for(i=num-1; i>=pos; i--)
                {
                    a[i+1]=a[i];
                }
                a[pos]=val;
                num=num+1;
                break;
            case 4:
                printf("\tEnter the position of the array element :");
                scanf("%d",&pos);
                val=a[pos];
                for(i=pos; i<num-1; i++)
                {
                    a[i]=a[i+1];
                }
                num=num-1;
                printf("\tThe deleted element is %d", val);
                break;
            case 5:
                exit(0);
                break;
        }
    }while(choice!=5);
    return 0;
}
