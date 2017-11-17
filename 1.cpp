#include <iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};
class linkedList
{private:
node *head, *tail;
public :
linkedList()
{ head=NULL;
  tail=NULL;}
void addNode(int n)
{node *tmp = new node;
tmp->data=n;
tmp->next=NULL;

if(head==NULL)
{ head=tmp;
  tail=tmp;}
else
{
	tail->next=tmp;
	tail= tail->next;
}
}
};
int main() {
	linkedList a;
	a.addNode(3);
	a.addNode(4);
#include <iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};
class linkedList
{private:
node *head, *tail;
public :
linkedList()
{ head=NULL;
  tail=NULL;}
void addNode(int n)
{node *tmp = new node;
tmp->data=n;
tmp->next=NULL;

if(head==NULL)
{ head=tmp;
  tail=tmp;}
else
{
	tail->next=tmp;
	tail= tmp;
}
}
void displayList()
{ if (head==NULL)
cout<<"The linked list is empty";
  else
 { node *tmp= head;
  while(tmp!=NULL)
  {cout<<tmp->data<<" ";
    tmp=tmp->next;
  	
  }
  }
}
};
int main() {
	linkedList a;
	a.addNode(3);
	a.addNode(4);
	a.displayList();
	#include <iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};
class linkedList
{private:
node *head, *tail;
public :
linkedList()
{ head=NULL;
  tail=NULL;}
void addNode(int n)
{node *tmp = new node;
tmp->data=n;
tmp->next=NULL;

if(head==NULL)
{ head=tmp;
  tail=tmp;}
else
{
	tail->next=tmp;
	tail= tmp;
}
}
void displayList()
{ if (head==NULL)
cout<<"The linked list is empty";
  else
 { node *tmp= head;
 cout<<"The list is:";
  while(tmp!=NULL)
  {cout<<tmp->data<<" ";
    tmp=tmp->next;
  	}
  	}
}
void insert(int pos,int n1)
{
    node *prev,*cur;
    node *tmp=new node;
    tmp->data=n1;
    tmp->next=NULL;
    prev=NULL;
    cur=head;
    int count=1;
   
        while(count!=pos)
        {
            prev=cur;
            cur=cur->next;
            count++;
        }
        if(count==pos)
        {
            prev->next=tmp;
            tmp->next=cur;
        }
        else
            cout<<"\nNot Able to Insert";
          }
};
int main() {
	linkedList a;
	int n1, pos;
	a.addNode(3);
	a.addNode(4);
	cout<<"Enter the element to be inserted";
	cin>>n1;
	cout<<"\nEnter The position to insert\n";
	cin>>pos;
	a.insert(pos,n1);
	a.displayList();
	return 0;
}	return 0;
}
