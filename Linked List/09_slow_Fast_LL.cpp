#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }  
};
void insertAtTail(node* &head , node* &tail , int value){
    node* newnode = new node(value);
    if(head == NULL){
        head = newnode;
        tail = newnode;
    }
    else{
        tail->next = newnode;
        tail = newnode;
    }
}
node* getmiddle(node* &head){
    node* slow = head;
    node* fast = head;
    if(head == NULL){
        cout<<"LL is empty";
        return head;
    }
    if(head->next == NULL){
        return head;
    }
    while(slow != NULL && fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
}
void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    node* head = NULL;
    node* tail = NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        insertAtTail(head , tail ,value);
    }
    cout<<"Given Elements"<<endl;
    print(head);
    cout<<endl;
    cout<<"Middle Node is:"<<getmiddle(head)->data<<" ";
    
  return 0;
}