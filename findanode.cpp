#include<bits\stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;
    
    node(int data){
        this->data = data;
        this->next = NULL;
    }
    };
    node*takeinput(){
        int data;
        cin>>data;
        node*head = NULL;
        node*tail = NULL;
        while(data != -1){
            node*newnode = new node(data);
            if(head == NULL){
                head = newnode;
                tail = newnode;
            }
            else{
                tail->next = newnode;
                tail = newnode;

            }
            cin>>data;

        }
        return head;
    }
    int findnode(node*head,int val){
        int count = 0;
        node*temp = head;
        while(temp != NULL){
            
            if(temp->data == val){
                return count ;
                
            }
            else{
                count +=1;
                temp = temp->next;
            }

        }
        return -1;
    }

    void print(node*head){
        node*temp = head;
        while(temp != NULL){
            cout<<temp->data<<endl;
            temp = temp->next;
        }
    }
    


int main(){
    node*head = takeinput();
    int val;
    cin>>val;
    
    cout<<findnode(head,val)<<endl;

}