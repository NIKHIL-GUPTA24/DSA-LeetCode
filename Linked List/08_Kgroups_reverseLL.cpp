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
void print (node* head){
    node* temp = head;
    while(temp!= NULL){
        cout<<temp->data <<" ";
        temp = temp->next;
    }
}
node* k_groupsReverse(node* &head, int k){
    if(head == NULL){
        cout<<"LL is empty"<<endl;
        return NULL;
    }

    int len = Length_LL(head);
    if(k>len){
        return head;
    }

    node* prev = NULL;
    node* curr = head;
    node* forward = curr->next;
    int count = 0;
    while(count < k){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }
    if(forward != NULL){
        head->next = k_groupsReverse(forward , k);
    }
    return prev ;

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
    head = k_groupsReverse(head , 3);
    print(head);
    
  return 0;
}
