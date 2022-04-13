#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};
int size(Node*head){
    int count =0;
     Node*temp = head;
     while(temp!=NULL){
        count+=1;
        temp = temp->next;
     }
     return count;
   
}
Node*deleteNodeRec(Node*head, int pos){
    int s = size(head);
    if(pos>s){
        return head;
    }
    
    Node*temp = head;
    if(temp == NULL){
        
        return head;
    }
    if(pos==0){
        
        temp = temp->next;
        return head;
    }
    Node*deleteNodeRechelper = deleteNodeRec(head->next,pos-1);
    if(pos==1){
        
        temp ->next = temp->next->next;

    }
    return head;
}



Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newNode = new Node(data);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
		cin >> data;
	}
	return head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		int pos;
		cin >> pos;
		head = deleteNodeRec(head, pos);

		print(head);
        
	}

	return 0;
}