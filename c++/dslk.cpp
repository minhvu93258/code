#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};
int main (){
    Node* head =NULL;
    Node* second= NULL;
    Node* third= NULL;

    head= new Node();
    second =new Node();
    third = new Node();

    head-> data=1;
    head-> next= second;

    second->data=2;
    second->next= third;

    third-> data=3;
    third-> next=NULL;

Node* current= head;
while(current!=NULL){
    cout<< current->data<<" ";
    current= current->next;
}
return 0;
}