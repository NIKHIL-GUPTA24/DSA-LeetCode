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
node* reverse_LL(node* head){
    node* prev = NULL;
    node* curr = head;
    node* next = curr->next;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
bool palindrome(node* &head){
    node* slow =head;
    node* fast = head;
    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
    }
    node* reverse_LL_Head = reverse_LL(slow->next);
    slow->next = reverse_LL_Head;

    // node* temp1 = head;
    // node* temp2 = reverse_LL_Head;
    // while(temp2 != NULL){
    //     if(temp1 ->data != temp2->data){
    //         return false;
    //     }
    //     else{
    //         temp1 = temp1->next;
    //         temp2 = temp2->next; 
    //     }
    // }
    // return true;
    slow =slow->next;
    while(slow != NULL){
        if(head->data != slow->data) return false;
        else{
            head = head->next;
            slow=slow->next;
        }
    }
    return true;
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
    cout<< palindrome(head);
  return 0;
}