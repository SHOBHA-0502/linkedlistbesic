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

    void print(node*head){
        node*temp = head;
        while(temp != NULL){
            cout<<head->data<<"//"<<temp->next<<endl;
            temp = temp->next;
        }
    }
    // node*insertnode(node*head,int pos, int val){
        
    //     node*temp = head;
    //     int count =0;
    //     node*newnode = new node(val);
    //     node*vemp;
    //     while(temp!=NULL){
    //         cout<<"wohoo"<<endl;
    //         if(count==pos-2){
    //             vemp = temp->next;
    //             temp->next= newnode;
    //             newnode->next= vemp;
    //             break;
    //         }
    //         else{
    //             count +=1;
    //             temp = temp->next;
    //         }
    //         cout<<count<<" //"<<endl;
            
    //     }
    //     return head;
    // }


int main(){
    node*head = takeinput();
    // int pos;
    // cin>>pos;
    // int val;
    // cin>>val;
    // node*newhead = insertnode(head,pos,val);
    print(head);

}
// #include <bits/stdc++.h>
// using namespace std;


// class node{
//     public:
//         int data;
//         node* next;
    
//     node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };
// node* takeinput(){
//     int data;
//     cin >> data;
//     // debug(data, 's');
//     node* head = NULL;
//     node* tail = NULL;
//     while(data != -1){
//         node*newnode = new node(data);
//         if(head == NULL){
//             head = newnode;
//             tail = newnode;
//         }
//         else{
//             tail->next = newnode;
//             tail = newnode;

//         }
//         cin>>data;

//     }
//     return head;
// }

// void print(node*head){
//     node*temp = head;
//     while(temp != NULL){
//         cout<<temp->data<<endl;
//         temp = temp->next;
//     }
// }


// int main(){
//     node* head = takeinput();
//     print(head);
//     return 0;
// }