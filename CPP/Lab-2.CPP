#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s1[10]="Hello";
    char s2[10]="Hello";
    char s3[10];
    int len;
    int a;
    //copying s1 into s3
    strcpy(s3,s1);
    cout<<"strcpy(s3,s1)="<<s3<<endl;
    //concatenating s1 and s2
    strcat(s1,s2);
    cout<<"strcat(s1,s2)="<<s1<<endl;
    //total length of s1 after concatenation
    len=strlen(s1);
    cout<<"str_length of s1 is"<<len<<endl;
    getch();
}
