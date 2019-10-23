#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int r,c,a[100][100],b[100][100],sum[100][100],i,j;
    cout<<"Enter no. of rows(between 1 and 100):";
    cin>>r;
    cout<<"Enter no. of column(between 1 and 100):";
    cin>>c;
    cout<<endl<<"Enter element of 1st matrix:-"<<endl;
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            cout<<"Enter element a"<<i+1<<j+1<<":";
            cin>>a[i][j];
        }
    cout<<endl<<"Enter element of 2nd matrix:-"<<endl;
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            cout<<"Enter element b"<<i+1<<j+1<<":";
            cin>>b[i][j];
        }
    //Adding two matrices
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
            sum[i][j]=a[i][j]+b[i][j];
    cout<<endl<<"Sum of two matrix is:"<<endl;
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            cout<<sum[i][j]<<"";
            if(j==c-1)
                cout<<endl;
        }
    getch();
}
