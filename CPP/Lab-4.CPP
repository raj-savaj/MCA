#include<iostream.h>
#include<conio.h>
class list
{
    struct node
    {
	int num;
	struct node *next;
    };
    node *first;
    public:
	list()
	{
		first=NULL;
	}
	void insertfirst();
	void deletefirst();
	void display();
};
void list::insertfirst()
{
    node *nn=new node;
    cout<<"\n enter the element to be inserted\n";
    cin>>nn->num;
    nn->next=first;
    first=nn;
}
void list::deletefirst()
{
    if(first==NULL)
	cout<<"list is empty";
    else
    {
	node *temp=first;
	cout<<"deleted element is"<<first->num;
	first=first->next;
	delete(temp);
    }
    getch();
}
void list::display()
{
    if(first==NULL)
	cout<<"list is empty!";
    else
    {
	node *temp=first;
	while(temp!=NULL)
	{
	    cout<<temp->num<<"\t";
	    temp=temp->next;
	}
    }
    getch();
}
void main()
{
    list l;
    int ch;
    do
    {
	clrscr();
	cout<<"1.insert at front\n2.delete from front\n3.display\n4.Exit\nenter the choice";
	cin>>ch;
	switch(ch)
	{
	case 1:
	    l.insertfirst();
	    break;
	case 2:
	    l.deletefirst();
	    break;
	case 3:
	    l.display();
	    break;
	}
    } while (ch!=4);
    getch();
}
