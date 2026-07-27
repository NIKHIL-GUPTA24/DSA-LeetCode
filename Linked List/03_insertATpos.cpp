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
    if(head == NULL){
    Node* newNode = new Node (data);
    head = newNode;
    tail= newNode;
        return;
    }
    Node* newNode = new Node (data);
    newNode->next = head;
    head = newNode;
}
void insertATend(Node* &head , Node* &tail , int data){
    if(head == NULL){
    Node* newNode = new Node (data);
    head = newNode;
    tail= newNode;
        return;
    }
    Node* newNode = new Node (data);
    tail->next = newNode;
    tail = newNode;
}
int findlength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
void insertAtpos(int data , int pos , Node* &head , Node* &tail){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail=newNode;
        return;
    }
    if(pos == 0){
        insertfront(head , tail , data);
        return;
    }
    int len = findlength(head);
    if(pos >= len){
        insertATend(head , tail , data);
        return;
    }
    int i=1;
    Node*prev =head;
    while(i<pos){
        prev = prev->next;
        i++;
    }
        Node* curr = prev->next;
        Node* newNode = new Node(data);
        newNode->next=curr;
        prev->next=newNode;
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
    cout<<endl;
    insertAtpos(101 , 6 ,head , tail);
    print(head);
    
  return 0;
}