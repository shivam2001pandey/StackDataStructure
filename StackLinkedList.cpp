//dynamic stack....
#include<iostream.h>
using namespace std;
//structure...
struct node
{
 int n;
 node *next;
};
//class declaration....
class stack
{
 node *top;
 public:
	stack()
	{
	 top=NULL;
	}
	void pushnode();
	void popnode();
	void traverse();
	~stack(){};
};

void stack::pushnode()
{
 node *ptr;
 ptr=new node;
 if(!ptr)
  cout<<"\n Stack Overflow.";
 else
 {
  cout<<"\n Enter the value of n:";
  cin>>ptr->n;
  ptr->next=top;
  top=ptr;
 }
}
void stack::popnode()
{
 int m;
 node *ptr;
 ptr=top;
 if(ptr==NULL)
  cout<<"\n Stack Underflow.";
 else
 {
  m=ptr->n;
  top=ptr->next;
  delete ptr;
  cout<<m;

 }
}
void stack::traverse()
{
 node *ptr=top;
 while(ptr!=NULL)
 {
  cout<<"==>"<<ptr->n;
  ptr=ptr->next;
 }
}

stack ob;     //object declaration....
void menu()
{
 int choice;
 do{
    clrscr();
    cout<<"\n\t\t Menu for Stack";
    cout<<"\n 1.Push";
    cout<<"\n 2.Pop";
    cout<<"\n 3.Traverse";
    cout<<"\n 4.Exit.";
    cout<<"\n Enter a choice[1...4]:";
    cin>>choice;
    switch(choice)
    {
     case 1:
	    ob.pushnode();
	    break;
     case 2:
	    ob.popnode();
	    break;
     case 3:
	    ob.traverse();
	    break;
     case 4:
	    cout<<"\n Exiting the program....";
	    break;
     default:
	     cout<<"\n Invalid choice!!!!Try Again...";
    }
    getch();
   }while(choice!=4);
}

int main()
{
 clrscr();
 menu();
 return 0;
}

