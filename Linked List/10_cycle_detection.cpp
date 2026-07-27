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
bool checkForLOOP(node* &head){
    if(head == NULL){
        return false;
    }
    node* slow = head;
    node* fast = head;
    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        if(slow == fast) return true;
    }
    return false;
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

    cout<<"loop present or not "<<checkForLOOP<<endl;
    
  return 0;
}