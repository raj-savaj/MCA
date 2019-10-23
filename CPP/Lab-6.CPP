#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
template <class t>
class bubble
{
    t a[10];
    public:
        void get(int);
        void sort(int);
        void display(int);
};
template<class t>
void bubble<t>::get(int n)
{
    int i;
    cout<<"enter the array elements\n";
    for(i=0; i<n; i++)
        cin>>a[i];
}
template<class t>
void bubble<t>::display(int n)
{
    int i;
    cout<<"the sorted array is\n";
    for(i=0; i<n; i++)
        cout<<a[i]<<setw(5);
}
template<class t>
void bubble<t>::sort(int n)
{
    int i,j;
    t temp;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void main()
{
    clrscr();
    int n;
    bubble<int>b1;
    bubble<double>b2;
    cout<<"bubble sort on intger value\n";
    cout<<"enter the size of array:\n";
    cin>>n ;
    b1.get(n);
    b1.sort(n);
    b1.display(n);
    cout<<"\nbubble sort on double value\n";
    cout<<"enter the size of array:\n";
    cin>>n;
    b2.get(n);
    b2.sort(n);
    b2.display(n);
    getch();
}
