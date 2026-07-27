#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *start = NULL;
void create(){
    int n,i;
    struct node *temp,*ptr;
    printf("Enter number of nodes: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        temp = (struct node*) malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d",&temp->data);
        temp->next = NULL;
        if(start == NULL){
            start = temp;
        }
        else{
            ptr = start;
            while(ptr->next != NULL){
                ptr = ptr->next;
            }
            ptr->next = temp;
        }
    }
}
void display(){
    struct node *ptr;
    ptr = start;
    while(ptr != NULL){
        printf("%d -> ",ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
}
int main(){
    create();
    display();
}