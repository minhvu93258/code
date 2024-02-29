#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
    node * prev;
};
node *makeNode(int x){
    node *newNode= new node;
    newNode->data=x;
    newNode->next= NULL;
    newNode->prev= NULL;
    return newNode;
}
void duyet(node *head){
    while(head!=NULL){
        cout<<head->data<<' ';
        head= head->next;
    }
    cout<<endl;
}
void themdau(node **head,int x){
    node *newNode= makeNode(x);
    newNode->next = (*head);
    if(*head != NULL)
    (*head)->prev = newNode;
    (#head) = newNode;
}
void themcuoi(node **head, int x){
node *newNode= makeNode(x);
if(*head==NULL){
    *head= newNode;
    return ;
}
node *temp = *head;
while(temp->next!=NULL){
    temp=temp->next;
}
temp->next= newNode;
newNode->prev=temp;
}
int main (){
    

return 0;
}