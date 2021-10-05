#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
};
void display(node *head){
    node *p;
    p = head;
    while(p!=NULL){
        cout<<p->data<<" ";
        p = p->next;
    }
}
void insert(node *head){
    node *ins, *p;
    int pos,info;
    cout<<"Enter the position to insert element: ";
    cin>>pos;
    cout<<"Enter the data to be inserted at "<<pos<<" position:";
    cin>>info;
    p = head;
    for(int i=0;i<pos;i++){
        p = p->next;
    }
    ins = new node;
    ins->data=info;
    ins->next=p->next;
    p->next=ins;
}
void deletenode(node *head){
    node *p;
    int pos;
    cout<<"Enter the position to delete element: ";
    cin>>pos;
    cout<<"Element deleted at "<<pos<<" position:";
    p = head;
    for(int i=0;i<pos;i++){
        p = p->next;
    }
    p->next = p->next->next;
}
int main(){

    node *head = NULL, *p = NULL;
    int n;
    cout<<"Enter number of nodes: ";
    cin>>n;
    for(int i=0; i<n;i++){
        if(i==0){
            head = new node;
            p = head;
        }
        else{
            p->next = new node;
            p = p->next;
        }
        cout<<"Enter element "<<i+1<<": ";
        cin>>p->data;
    }
       
    display(head);
    insert(head);
    display(head);
    deletenode(head);
    return 0;
}