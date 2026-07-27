#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node(){
        this->data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ->"<<" ";
        temp=temp->next;
    }
    cout<<"NULL";
}
void insertfront(Node* &head ,Node* &tail , int data){
    Node* newNode = new Node (data);
    newNode->next = head;
    if(head==NULL){
        tail = newNode;
    }
    head = newNode;
}
void insertATend(Node* &head , Node* &tail , int data){
    Node* newNode = new Node (data);
    tail->next = newNode;
    if(head == NULL){
        head = newNode;
    }
    tail = newNode;
    
}

int main(){
    Node* head=NULL;
    Node* tail=NULL;
    insertfront(head ,tail , 20);
    insertfront(head ,tail , 30);
    insertfront(head ,tail, 40);
    insertfront(head ,tail, 50);
    insertfront(head ,tail,60);
    insertATend(head ,tail , -10);
    print (head);
    
  return 0;
}