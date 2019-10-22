#include <stdio.h>
#include<math.h>
typedef struct Student {
    char name[20];
    char branch[20];
    char id[20];
    int m1,m2,m3;
    float avg;
}Student;

int main()
{
    char id[10];
    FILE *fp,*ft;
    char another,choice;
    Student s;
    char fname[20];
    char lname[20];
    long int recsize;
    fp=fopen("s.DAT","rb+");
    if(fp==NULL) {
        fp=fopen( "s.DAT","wb+");
    }
    if(fp==NULL) {
        printf("Can't Open File");
    }
    recsize=sizeof(s);
    while(1) {
        printf("\n1.Add Records\n2.Delete Record \n3.ListRecords\n4.Diaply Average Marks\n5.Exit");
        printf("\nEnter your choice :");
        fflush(stdin);
        scanf("%c",&choice);
        switch(choice) {
            case'1':
                fseek(fp,0,SEEK_END);

                printf("\nEnter the id,name branch : ");
                scanf("%s %s %s",s.id,s.name,s.branch);
                printf("\nEnter the marks1 marks 2, marks 3 :");
                scanf("%d %d %d",&s.m1,&s.m2,&s.m3);
                s.avg=(s.m1+s.m2+s.m3)/3.0;
                fwrite(&s,recsize,1,fp);
                break;
            case '2':
                printf("Enter the id of the Student to be deleted : ");
                scanf("%s",&id);
                ft=fopen("TEMP.DAT","wb");
                rewind(fp);
                while(fread(&s,recsize,1,fp)==1) {
                    if(strcmp(s.id,id)!=0)
                    fwrite(&s,recsize,1,ft);
                }
                fclose(fp);
                fclose(ft);
                remove("s.DAT");
                rename("TEMP.DAT","s.DAT");
                fp=fopen("s.DAT","rb+");
                break;
            case '3':
                rewind(fp);
                while(fread(&s,recsize,1,fp)==1)
                    printf("\n %s %s %s %d %d %d",s.name,s.id,s.branch,s.m1,s.m2,s.m3);
                break;
            case '4' :
                rewind(fp);
                while(fread(&s,recsize,1,fp)==1)
                    printf("\n %s %s %s %d %d %d %f",s.name,s.id,s.branch,s.m1,s.m2,s.m3,s.avg);
                break;
            case '5':
                fclose(fp);
                break;
        }
    }
    return 0;
}
