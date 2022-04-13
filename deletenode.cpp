#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int data){
        this->data = data;
        this->next=NULL;

    }
    };
    node*takeinput(){
        int data;
        cin>>data;
        node*head = NULL;
        node*tail=NULL;
        while(data!=-1){
            node*newnode =new node(data);
            if(head == NULL){
                head = newnode;
                tail = newnode;

            }
            else{
                tail->next = newnode;
                tail=newnode;
            }
            cin>>data;
        }
        return head;
         
    }
    void print(node*head){
        node*temp = head;
        while(temp!=NULL){
            
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
    node*deletenode(node*head,int pos){
        
        int count =0;
        node*temp = head;
        while(temp != NULL){
            
            

            if(count == pos-2){
                
                temp->next =temp->next->next;
                break;

            }
            else{
            temp = temp->next;
            count = count+1;
            }
        }
        return head;

    }


int main(){
    node*head = takeinput();
    int pos;
    cin>>pos;
    node*newhead = deletenode(head,pos);
    print(head);

}