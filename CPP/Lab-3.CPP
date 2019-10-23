#include<iostream.h>
#include<conio.h>
class student
{
    char usn[10];
    char name[10];
    float m1,m2,m3;
    float avg;
    public:
      void read_data();
      void compute();
      void write_data();
};
void student::read_data()
{
    cout<<"enter the usn\n";
    cin>>usn;
    cout<<"enter the name\n";
    cin>>name;
    cout<<"enter the marks\n";
    cin>>m1>>m2>>m3;
}
void student::compute()
{
    if(m1<m2&&m1<m3)
        avg=(m2+m3)/2;
    else if(m2<m3)
        avg=(m1+m3)/2;
    else
        avg=(m1+m2)/2;
}
void student::write_data()
{
    cout<<"\n name is"<<name;
    cout<<"\n m1 is"<<m1;
    cout<<"\n m2 is"<<m2;
    cout<<"\n m3 is"<<m3;
    cout<<"\n avg. of best of two subjects"<<avg;
}
int main()
{
    student s[10];
    int n,i;
    clrscr();
    cout<<"enter the number of students\n";
    cin>>n;
    for(i=0; i<n; i++)
        s[i].read_data();
    for(i=0; i<n; i++)
        s[i].compute();
    for(i=0; i<n; i++)
        s[i].write_data();
    getch();
    return 0;
}
