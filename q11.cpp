#include<bits/stdc++.h>
using namespace std ;
class node{
    public:
    int data;
    node*next;
    
    node(int data){
        this->data=data;
        next = NULL;
    }
};
void print(node *head){
    node*temp = head;
    while(head->next != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;


    }
}
node*takeinput(){
    int data;
    cin>>data;
    node*head = NULL;
    node*tail= NULL;
    while(data != -1){
        node*newnode = new node(data);
        if(head== NULL){
            head =newnode;
            tail = newnode;

        }
        else{
            tail->next = newnode;
            tail = newnode;

        }

        
    }
}


int main(){
    node n1(19);
    node n2(13);
    n1.next = &n2;
    node*head = &n1;
    node*n3 = new node(10);
    node*n4 =new node(20);
    node*n5 = new node(80);
    n3->next = n4;
    n4->next = n5;


}
