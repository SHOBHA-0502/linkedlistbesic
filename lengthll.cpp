#include<bits/stdc++.h>
using namespace std ;
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

    while(data !=-1){
        node*newnode = new node(data);
        if(head==NULL){
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
int length(node*head){
    node*temp = head;
    int count =0;
    while(temp !=NULL){
        count +=1;
        temp=temp->next;
        
    }
    return count;
}
int main(){
    int t ;
    cin>>t;
    while(t--){
        node*head = takeinput();
        cout<<length(head)<<endl;
    }

}