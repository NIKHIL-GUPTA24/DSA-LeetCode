#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};  
int Length_LL(node* head){
    int length =0;
    node* temp = head;
    while(temp!=NULL){
        length++;
        temp = temp->next;
    }
    return length;
}
void insertAtTAIL(node* &head , node* &tail ,int data){
    node*newnode = new node(data);
    if(head == NULL){
        head = newnode;
        tail = newnode;
    }
    else{
        tail->next = newnode;
        tail = newnode;
    }
}
node* Middle(node* head){
    int len=Length_LL(head);
    int mid;
    if(len % 2 == 0){
        mid=len/2;
    }
    else{
        mid= (len/2) + 1 ;
    }
    node* temp = head;
    for(int i=1;i<mid;i++){
        temp = temp ->next;
    }
    return temp;
}
void print (node* head){
    node* temp = head;
    while(temp!= NULL){
        cout<<temp->data <<" ";
        temp = temp->next;
    }
}
int main(){
    node* head = NULL;
    node* tail = NULL;
    int n;
    cout<<"Enter no of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        insertAtTAIL(head , tail , value);
    }
    print(head);
    cout<<endl;
    node* middle = Middle(head);
    cout<<"Middle Node: "<<middle->data;
  return 0;
}
