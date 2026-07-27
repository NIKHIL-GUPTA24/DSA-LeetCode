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

void sortZeroOneTwo (node* &head){
    int zero = 0;
    int one = 0;
    int two = 0;

    node* temp = head;
    while(temp != NULL){
        if(temp ->data == 0){
            zero ++;
        }
        else if( temp ->data == 1){
            one ++;
        }
        else{
            two++;
        }
        temp = temp->next;
    }
    temp = head;
    while(temp != NULL){
        while(zero --){
            temp->data = 0;
            temp = temp->next;
        }
        while(one -- ){
            temp->data =1;
            temp = temp ->next;
        }
        while(two --){
            temp->data =2;
            temp=temp->next;
        }
    }
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
    sortZeroOneTwo(head);
    print(head);
    
  return 0;
}