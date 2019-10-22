#include<stdio.h>
int main()
{
    FILE *fp1,*fp2;
    char ch,fname1[20],fname2[20];
    printf("\nEnter source file name :");
    gets(fname1);
    printf("\nEnter dest file name :");
    gets(fname2);
    fp1=fopen(fname1,"r");
    fp2=fopen(fname2,"w");
    if(fp1==NULL||fp2==NULL)
    {
        printf("unable to open");
    }
    do
    {
        ch=fgetc(fp1);
        fputc(ch,fp2);
    }while(ch!=EOF);
    fcloseall();
    printf("\n Files copied Successfully");
    return 0;
}
