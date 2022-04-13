#include <iostream>
using namespace std;

class Node {
   public:
    int data;
    Node *next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};




Node *takeinput() {
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1) {
        Node *newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

Node*insertNode(Node*head, int pos,int data){
 Node*temp = head ;
 Node*vemp ;
 if(temp ==NULL){
     return head;
 }
 if(pos==0){
     Node*newnode = new Node(data);
     newnode->next = head;
     head = newnode;
 }
 Node*insertnodehelper = insertNode(temp->next,pos-1,data);
 if(pos ==1){
     Node*newnode = new Node(data);
     vemp = temp->next;
     temp ->next = newnode;
     newnode->next = vemp;  
     
     
 }
 return head;
 
}
void print(Node *head) {
    Node *temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << "\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        Node *head = takeinput();
        int pos, data;
        cin >> pos >> data;
        head = insertNode(head, pos, data);
        print(head);
    }
}