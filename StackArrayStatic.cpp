
//static stack
#include<iostream>
using namespace std;
#define max 50
class stack
  {
     int data[max];
     int top;
    public:
	 stack()
	   {
	      top==-1;
	   }
	 void push()
	   {
	      int x;
	      if(top==max)
		  cout<<"stack overflow:";
	      else
		  {
		     cout<<"\nEnter the elements to push:";
		     cin>>x;

		     data[top++]=x;
		  }
	   }
	void pop()
	   {
	       int x;
	       if(top<0)
		 cout<<"\nstack underflow:";
	       else
		  {
		     x=data[top];
		     top--;
		     cout<<"\nElement deleted is:" <<x;
		  }
	   }
	void traverse()
	   {
	      //int i;

	      clrscr();
	      cout<<"\nThe values are:";
	      for(int i=top-1;i>=0;i--)
		  cout<<"\n"<<data[i];
	  }

   };
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
	    ob.push();
	    break;
     case 2:
	    ob.pop();
	    break;
     case 3:
	    ob.traverse();
	    break;
     case 4:
	    cout<<"\n Exiting the program....";
	    exit(1);
     default:
	     cout<<"\n Invalid choice!!!!Try Again...";
    }
    getch();
   }while(choice!=4);
}

int main()
{
  menu();
 return 0;
}


