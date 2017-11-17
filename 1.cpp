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
	return 0;
}
