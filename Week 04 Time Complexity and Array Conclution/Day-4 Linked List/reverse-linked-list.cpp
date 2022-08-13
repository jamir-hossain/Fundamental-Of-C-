#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};

//Reverse list with non recursive way
Node *reverseListNonRecursive(Node *&head)
{
    Node *prev = NULL;
    Node *current = head;
    if(head == NULL) return head;
    Node *next = head->next;

    while(1){
        current->next = prev;
        prev = current;
        current = next;
        if(current == NULL) break;
        next = next->next;
    }

    return prev;
}

//Reverse list with recursive way
Node *reverseListRecursive(Node *&head)
{
    if(head == NULL || head->next == NULL){
        return head;
    }

    //Recursive call
    Node *newHead = reverseListRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
}

//Print the all item of linked list
void displayList(Node *head)
{
    cout<<"Display Items"<<endl;
    while(head != NULL)
    {
        cout<<head->value<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main()
{
    Node *head = new Node(5);
    Node *a = new Node(6);
    Node *b = new Node(7);
    Node *c = new Node(8);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = NULL;

    displayList(head);

    //head = reverseListNonRecursive(head);
    head = reverseListRecursive(head);
    displayList(head);

    return 0;
}
