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


Node*appendLastNToFirst(Node*head,int n){
    int s =0 ;
    int count =0 ;
    
    Node* temp = head ;
     Node* vemp = head ;
     Node *semp = head;


    while(temp!=NULL){
        
        s +=1;
        temp = temp->next ;   
    }
    while(semp !=NULL){
        
        if(semp ->next == NULL){
            semp->next = head;
            break;
        }
        semp = semp->next;
    }
    int k = s-n;
    
    while(vemp != NULL){
        
        if(count == k-1){
            head =  vemp->next;
            vemp->next= NULL;
            break;
        
        }
        vemp = vemp ->next;
        count +=1;
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