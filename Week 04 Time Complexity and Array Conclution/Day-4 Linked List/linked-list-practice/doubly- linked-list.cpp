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

//Display the all element of list
void displayList(Node *head)
{
    cout<<"Display items"<<endl;
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

//Count the length of linked list
int listLength(Node *head)
{
    int lenght = 0;
    while(head != NULL)
    {
        lenght++;
        head = head->next;
    }
    return lenght;
}

//Insert element at the position of head
void insertAtHead(Node* &head, int value)
{
    Node *prevHead = head;
    Node *newHead = new Node(value);
    if(head == NULL){
        newHead->next = prevHead;
        head = newHead;
    }else {
        newHead->next = prevHead;
        prevHead->prev = newHead;
        head = newHead;
    }
}

//Insert elements at the position of tail
void insertAtTail(Node* &head, int val)
{
    Node *temp = head;
    Node *newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        return;
    }

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

//Insert element at any position
void insetItem(Node* &head, int value, int pos)
{
    //Insert at tail position
    if(pos == 1){
        Node *prevHead = head;
        Node *newNode = new Node(value);
        newNode->next = prevHead;
        prevHead->prev = newNode;
        head = newNode;
        return;
    }
    if(pos > listLength(head)){
        cout<<"Invalid position"<<endl;
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

//Search element from uniqe list
void searchItem(Node* head, int value)
{
    int position = 1;
    int flag = 0;

    while(head != NULL)
    {
        if(head->value == value){
            flag = 1;
            break;
        }
        head = head->next;
        position++;
    }
    if(flag == 0){
        cout<<"Value is not found"<<endl;
    }
    else {
        cout<<"Value "<<value<<" and Position is : "<<position<<endl;
    }
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
    if(pos > listLength(head)){
        cout<<"Invalid position"<<endl;
        return;
    }

    Node *temp = head;
    for(int i=1; i<pos-1; i++)
    {
        temp = temp->next;
    }
    //The next node of deletable element
    if(pos == listLength(head)){
        delete temp->next;
        temp->next = NULL;
    }else {
        Node *nextNode = temp->next->next;
        delete temp->next;
        temp->next = nextNode;
        nextNode->prev = temp;
    }
}

int main()
{
    Node *head = NULL;

    while(1){
        int choice;
        cout<<"Select choice"<<endl;
        cout<<"01. Insert at head"<<endl;
        cout<<"02. Insert at tail"<<endl;
        cout<<"03. Insert at any position"<<endl;
        cout<<"04. Search item from list"<<endl;
        cout<<"05. Delete from any position"<<endl;
        cout<<"06. Exit program"<<endl;
        cin>>choice;

        if(choice == 6) break;

        int n, value, positon;
        switch (choice){
            case 1:
                //Getting elements
                cout<<"How many element do you insert : ";
                cin>>n;
                cout<<"Enter the "<<n<<" elements"<<endl;

                for(int i=0; i<n; i++){
                    int m;
                    cin>>m;
                    insertAtHead(head, m);
                }
                break;

            case 2:
                //Getting elements
                cout<<"How many element do you insert : ";
                cin>>n;
                cout<<"Enter the "<<n<<" elements"<<endl;

                for(int i=0; i<n; i++){
                    int m;
                    cin>>m;
                    insertAtTail(head, m);
                }
                break;

            case 3:
                cout<<"Insert new element"<<endl;
                int value, position;
                cout<<"Value : ";
                cin>>value;
                cout<<"Position : ";
                cin>>position;
                insetItem(head, value, position);
                break;

            case 4:
                cout<<"Search the position of value"<<endl;
                cout<<"Value : ";
                cin>>value;
                searchItem(head, value);
                break;

            case 5:
                cout<<"Delete value from specific position"<<endl;
                cout<<"Position : ";
                cin>>positon;
                deleteItem(head, positon);
                break;
        }
        displayList(head);
    }

    displayList(head);

    return 0;
}
