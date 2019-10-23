#include<iostream.h>
#include<conio.h>
class complex
{
    int r,i;
    public:
        void read();
        void print();
        friend complex add(int a,complex c);
        friend complex add(complex c1,complex c2);
};
void complex::read()
{
    cout<<"enter the real and imaginary part";
    cin>>r>>i;
}
void complex::print()
{
    cout<<r<<"+i"<<i<<endl;
}
complex add(int a,complex c)
{
    complex t;
    t.r=a+c.r;
    t.i=c.i;
    return t;
}
complex add (complex c1,complex c2)
{
    complex t;
    t.r=c1.r+c2.r;
    t.i=c1.i+c2.i;
    return t;
}
void main()
{
    int a;
    clrscr();
    complex s1,s2,s3;
    s1.read();
    cout<<"enter a value:";
    cin>>a;
    cout<<"\ns1:";
    s1.print();
    s2=add(a,s1);
    cout<<"s2:"<<a<<"+s1\n";
    cout<<":";
    s2.print();
    s3=add(s1,s2);
    cout<<"s3=s1+s2\n";
    cout<<"s1:";
    s1.print();
    cout<<"s2:";
    s2.print();
    cout<<"s3:";
    s3.print();
    getch();
}
