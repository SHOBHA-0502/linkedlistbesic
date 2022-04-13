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


Node*appendLastNToFirst(Node*head, int n){
    
    Node*temp = head;
    Node*zemp=head;
    Node*vemp;
    int count =1;
    while(temp!=NULL){
      
        if(count == n-1){
           vemp = temp->next ;
           
            break;
        }
        else{
            temp = temp->next;
            count = count+1;
            
        }
        
    }
    while(zemp!=NULL){
        
        if(zemp->next ==NULL){
            
            zemp->next =head;
            temp->next = NULL;
            
            
            break;
        }
        else{
            zemp = zemp->next;
        }     
    }
   
    head = vemp;
    
    return head;
}

Node *takeinput()
{
 
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
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
		int n;
		cin >> n;
		head = appendLastNToFirst(head, n);
		print(head);
	}
	return 0;
}