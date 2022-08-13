#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *prev;
    Node *next;

    Node(int value){
        this->value = value;
        this->prev = NULL;
        this->next = NULL;
    }
};

//Insert element at any position
void insetItem(Node* &head, int value, int pos)
{
    //Insert at tail position
    if(pos == 1)
    {
        Node *prevHead = head;
        head = new Node(value);
        head->next = prevHead;
        prevHead->prev = head;
        return;
    }

    Node *temp = head;
    for(int i=1; i<pos-1; i++)
    {
        temp = temp->next;
    }
    Node *newNode = new Node(value);
    Node *prevNode = temp->next;

    temp->next = newNode;
    newNode->next = prevNode;

    prevNode->prev = newNode;
    newNode->prev = temp;
}

//Delete element from any position
void deleteItem(Node* &head, int pos)
{
    //Insert at tail position
    if(pos == 1)
    {
        head = head->next;
        head->prev = NULL;
        return;
    }

    Node *temp = head;
    for(int i=1; i<pos-1; i++)
    {
        temp = temp->next;
    }
    //The next node of deletable element
    Node *nextNode = temp->next->next;
    delete temp->next;
    temp->next = nextNode;
    nextNode->prev = temp;

}

void displaList(Node *head)
{
    Node *temp = head;
    while(temp->next != NULL){
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<temp->value<<endl;

    while(temp!= NULL){
        cout<<temp->value<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}

int main()
{
    Node* head = new Node(5);
    Node* a = new Node(6);
    Node* b = new Node(7);
    Node* c = new Node(8);

    head->next = a;

    a->prev = head;
    a->next = b;

    b->prev = a;
    b->next = c;

    c->prev = b;

    cout<<"Insert new element"<<endl;
    int value, position;
    cout<<"Value : ";
    cin>>value;
    cout<<"Position : ";
    cin>>position;
    insetItem(head, value, position);
    displaList(head);

    cout<<"Delete an element"<<endl;
    cout<<"Position : ";
    cin>>position;
    deleteItem(head, position);
    displaList(head);

    return 0;
}
