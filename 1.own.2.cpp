#include <iostream>
using namespace std;

struct node
{ 
int data;
node *next;
};

class linkedList{

private:
node *head,*tail;
int n;
public:
linkedList()
{
head=NULL;
tail=NULL;
n=0;
}

void addNode(int n)
{
node*tmp=new node;
tmp->data=n;
tmp->next=NULL;
if (head==NULL)
  {
head=tmp;
tail=tmp;
   ++n;
}
	else
{
tail->next=tmp;
tail=tmp;
++n;
}
}
void insertNode(int pos,int n1)

{ 
int count=1;
node *cur, *prev;
cur= head;
prev=cur;
node *tmp= new node;
tmp->data=n1;
tmp->next=NULL;
while(count!=pos)

          {
prev=cur;
cur=cur->next;
count++;
  }
prev->next=tmp;
 tmp->next=cur;
 ++n;
}

void display()
{ 
node *tmp;
tmp=head;
if(head==NULL)
cout<<"\nThe list is empty.";
else
cout<<"\nThe list is :";
while(tmp!=NULL){
cout<<tmp->data<<" ";
tmp=tmp->next;
 }
}
void deleteNode(int n2)
{
  int count=1;
node *move;
	move=head;
  while(count<n2-1)
	{
	move=move->next;
	count++;
	}
	move->next=(move->next)->next;
--n;
  }
};

int main() {
int n1,pos;
linkedList l;
l.addNode(3);
l.addNode(5);
l.addNode(7);
l.addNode(2);
l.display();
cout<<"\nEnter the element to be inserted.";
cin>>n1;
cout<<"\nEnter the position.";
cin>>pos;
l.insertNode(2,9);
l.display();
l.deleteNode(3);
l.display();
	return 0;
}
