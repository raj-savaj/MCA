#include <iostream.h>
#include <conio.h>
#include<stdlib.h>
#include <process.h>
#define max 5
template <class Q>
class QUEUE
{
    int f,r;
    Q q[max];
    public:
        QUEUE()
        {
            f=-1;
            r=-1;
        }
        void insert(Q);
        void del();
};

template <class Q>
void QUEUE<Q>::insert(Q item)
{
    if (r==max-1)
    {
        cout<<"queue is full"<<endl;
        return;
    }
    r++;
    q[r]=item;
    if(f==-1)
        f++;
    if(f==-1)
    {
        cout<<"queue is empty"<<endl;
        return;
    }
    cout<<"contents of the queue"<<endl;
    for(int i=f; i<=r; i++)
        cout<<q[i]<<endl;
}

template<class Q>
void QUEUE<Q>::del()
{
    Q item;
    if(f==-1)
    {
        cout<<"queue is empty"<<endl;
        return;
    }
    item =q[f];
    cout<<"deleted element is"<<'\n'<<item<<endl;
    if(f==r)
        f=r=-1;
    else
        f++;
    if(f==-1)
    {
        cout<<"queue is empty"<<endl;
        return;
    }
    cout<<"contents of the queue"<<endl;
    for(int i=f; i<=r; i++)
        cout<<q[i]<<endl;
}
void main()
{
    QUEUE<int> x;
    QUEUE<double> y;
    int ch,i;
    double d;
    clrscr();
    cout<<"queue operations"<<endl;
    for(;;)
    {
        cout<<"1.insert integer 2.delete integer"<<endl;
        cout<<"3.insert double 4.delete double "<<endl;
        cout<<"5.exit"<<endl;
        cout<<"enter ur option"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1 :
            cout<<"enter an integer"<<endl;
            cin>>i;
            x.insert(i);
            break;
        case 2 :
            x.del();
            break;
        case 3 :
            cout<<"enter a double"<<endl;
            cin>>d;
            y.insert(d);
            break;
        case 4 :
            y.del();
            break;
        case 5 :
        default:
            exit(0);
        }
    }
    getch();
}
